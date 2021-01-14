/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:11 by rmaple            #+#    #+#             */
/*   Updated: 2020/11/15 19:19:19 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** exterminatus for i and write buff
*/

int			print_buff(char buff[4096], int *i, int fd)
{
	int	ret;

	ret = *i;
	*i = 0;
	write(fd, buff, ret);
	return (ret);
}

int			check_fd(char **str, va_list *va)
{
	int i;
	int fd;

	i = 3;
	fd = 1;
	if ((*str)[0] == '%' && (*str)[1] == 'f' && (*str)[2] == 'd')
	{
		while (i--)
			(*str)++;
		fd = open(va_arg(*va, char*), O_CREAT | O_RDWR, 00777);
	}
	return (fd);
}

static int	ft_count(char *str, va_list *va, int count, int fd)
{
	int		plus;
	char	b[4096];
	int		i;

	i = 0;
	while (*str)
	{
		if (i == 4095)
			count += print_buff(b, &i, fd);
		count += color_check(&str, b, &i);
		if (*str == '%')
		{
			if (!(*(++str)))
				return (count + print_buff(b, &i, fd));
			if ((plus = print_buff(b, &i, fd) + lets_do(va, &str, fd)) == -1)
				return (-1);
			count += plus;
		}
		else
			b[i++] = *str;
		if (*str)
			str++;
	}
	return (count + print_buff(b, &i, fd));
}

static int	open_fd(char *str, va_list *va, int count)
{
	int	fd;
	int	mem;

	mem = 0;
	fd = check_fd(&str, va);
	mem = ft_count(str, va, count, fd);
	if (fd != 1)
		close(fd);
	return (mem);
}

/*
** we work with adresses of varibles!
*/

int			ft_printf(const char *format, ...)
{
	int		i;
	va_list	va;
	int		count;

	i = 0;
	count = 0;
	if (*format)
	{
		va_start(va, format);
		i = open_fd((char *)format, &va, count);
		va_end(va);
	}
	return (i);
}

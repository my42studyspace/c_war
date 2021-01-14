/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_modf2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:30:28 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/23 17:30:30 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** set_inside but dont free s1! only for %b bonuse needed
*/

char		*ft_inside(char *s1, char *s2, unsigned int x)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new_s == NULL)
		return (NULL);
	while (s2[i] && i < x)
		new_s[j++] = s2[i++];
	i = 0;
	while (s1[i])
		new_s[j++] = s1[i++];
	i = x;
	while (s2[i])
		new_s[j++] = s2[i++];
	free(s2);
	return (new_s);
}

int			ft_putstr_free(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	free(s);
	return (i);
}

int			ft_putstr_fd_free(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	free(s);
	return (i);
}

void		ft_putstr_fd1(char const *s, int fd)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		write(fd, &s[i], 1);
}

/*
** for bonus color only
*/

int			ft_putstrint(char const *s)
{
	ft_putstr_fd(s, 1);
	return (0);
}

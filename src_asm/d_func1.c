/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_func1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassem.h"

char	*ft_d_live(t_read *reader)
{
	char	*line;

	line = "\nlive ";
	reader->i += 1;
	line = ft_strplus(line, print_dir(reader, 4), 0, 1);
	return (line);
}

char	*ft_d_ld(t_read *reader)
{
	char	*line;

	line = "\nld ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 4, 4, 1), 0, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 3, 2), 1, 1);
	print_arg(reader, 4, 0, 3);
	return (line);
}

char	*ft_d_st(t_read *reader)
{
	char	*line;

	line = "\nst ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 4, 3, 1), 0, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 6, 2), 1, 1);
	print_arg(reader, 4, 0, 3);
	return (line);
}

char	*ft_d_add(t_read *reader)
{
	char	*line;

	line = "\nadd ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 4, 3, 1), 0, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 3, 2), 1, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 3, 3), 1, 1);
	return (line);
}

char	*ft_d_sub(t_read *reader)
{
	char	*line;

	line = "\nsub ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 4, 3, 1), 0, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 3, 2), 1, 1);
	line = ft_strplus(line, ", ", 1, 0);
	line = ft_strplus(line, print_arg(reader, 4, 3, 3), 1, 1);
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_func4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:11 by rmaple            #+#    #+#             */
/*   Updated: 2020/11/15 19:19:19 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassem.h"

char	*ft_d_aff(t_read *reader)
{
	char	*line;

	line = "\naff ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 2, 3, 1), 0, 1);
	print_arg(reader, 2, 3, 2);
	print_arg(reader, 2, 3, 3);
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_functions2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassem.h"

char	*print_dir(t_read *reader, int size)
{
	char	*arg;

	if (reader->i + size > reader->code_size)
		d_errors(3);
	arg = ft_strplus("%", ft_itoa(code_to_int(reader, size)), 0, 1);
	reader->i += size;
	return (arg);
}

char	*print_indir(t_read *reader)
{
	char	*arg;

	if (reader->i + IND_SIZE > reader->code_size)
		d_errors(3);
	arg = ft_itoa(code_to_int(reader, IND_SIZE));
	reader->i += IND_SIZE;
	return (arg);
}

char	*print_reg(t_read *reader)
{
	char	*arg;

	if (reader->i + 1 > reader->code_size)
		d_errors(3);
	arg = ft_strplus("r", ft_itoa(code_to_int(reader, 1)), 0, 1);
	reader->i += 1;
	return (arg);
}

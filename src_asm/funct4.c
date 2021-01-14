/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assem.h"

int	ft_aff(t_pars *parser, char **bytecode)
{
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x10, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (!(arg_type(parser, 1, bytecode)))
		return (0);
	if (next_arg(parser, 3, 2, bytecode))
		return (1);
	return (0);
}

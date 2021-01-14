/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:30:28 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/23 17:30:30 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assem.h"

int	ft_sti(t_pars *parser, char **bytecode)
{
	int size;

	size = 0;
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x0b, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (!(arg_type(parser, 3, bytecode)))
		return (0);
	if (next_arg(parser, 3, 2, bytecode))
		size++;
	if (next_arg(parser, 7, 2, bytecode) && size == 1)
		size++;
	if (next_arg(parser, 5, 2, bytecode) && size == 2)
		return (1);
	return (0);
}

int	ft_fork(t_pars *parser, char **bytecode)
{
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x0c, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (next_arg(parser, 1, 2, bytecode))
		return (1);
	return (0);
}

int	ft_lld(t_pars *parser, char **bytecode)
{
	int	size;

	size = 0;
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x0d, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (!(arg_type(parser, 2, bytecode)))
		return (0);
	if (next_arg(parser, 4, 4, bytecode))
		size++;
	if (next_arg(parser, 3, 4, bytecode) && size == 1)
		return (1);
	return (0);
}

int	ft_lldi(t_pars *parser, char **bytecode)
{
	int size;

	size = 0;
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x0e, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (!(arg_type(parser, 3, bytecode)))
		return (0);
	if (next_arg(parser, 7, 2, bytecode))
		size++;
	if (next_arg(parser, 5, 2, bytecode) && size == 1)
		size++;
	if (next_arg(parser, 3, 2, bytecode) && size == 2)
		return (1);
	return (0);
}

int	ft_lfork(t_pars *parser, char **bytecode)
{
	parser->token = parser->token->next;
	int_to_byte(*bytecode, parser->i, 0x0f, NAME_SIZE);
	parser->i += NAME_SIZE;
	if (next_arg(parser, 1, 2, bytecode))
		return (1);
	return (0);
}

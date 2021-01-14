/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfreddie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:55:20 by gfreddie          #+#    #+#             */
/*   Updated: 2020/11/22 12:55:24 by gfreddie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

long int		get_t_dir4(unsigned char *mem, int pos)
{
	long int	t_dir;

	t_dir = 0;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	return (t_dir);
}

short int		get_t_dir2(unsigned char *mem, int pos)
{
	short int	t_dir;

	t_dir = 0;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	return (t_dir);
}

unsigned char	get_t_reg(unsigned char *mem, int pos)
{
	unsigned char	t_reg;

	pos += 1;
	pos %= MEM_SIZE;
	t_reg = mem[pos];
	return (t_reg);
}

long int		get_t_dir4_inplace(unsigned char *mem, int pos)
{
	long int	t_dir;

	t_dir = 0;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	t_dir <<= 8;
	pos += 1;
	pos %= MEM_SIZE;
	t_dir += mem[pos];
	return (t_dir);
}

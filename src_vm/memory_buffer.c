/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfreddie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:55:20 by gfreddie          #+#    #+#             */
/*   Updated: 2020/11/22 12:55:24 by gfreddie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

unsigned char	*mem_buff_init(void)
{
	return ((unsigned char*)ft_strnew(MEM_SIZE));
}

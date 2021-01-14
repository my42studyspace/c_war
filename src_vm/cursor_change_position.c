/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cursor_change_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void		cursor_change_position(t_cursor *list, int shift)
{
	if (list)
	{
		list->position += shift;
		list->position %= MEM_SIZE;
		if (list->position < 0)
			list->position = MEM_SIZE + list->position;
	}
}

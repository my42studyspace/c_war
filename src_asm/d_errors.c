/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_errors.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassem.h"

char	*d_errors(int error)
{
	if (error == 1)
		ft_printf("No such file or can't open\n");
	else if (error == 2)
		ft_printf("Can't make file\n");
	else if (error == 3)
		ft_printf("Incorrect champ code\n");
	else if (error == 4)
		ft_printf("Incorrect MAGIC\n");
	else if (error == 5)
		ft_printf("Incorrect command len\n");
	else if (error == 6)
		ft_printf("I'm sorry I'm tired and work incorrectly\n");
	exit(1);
}

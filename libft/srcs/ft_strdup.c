/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfreddie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:55:20 by gfreddie          #+#    #+#             */
/*   Updated: 2020/11/22 12:55:24 by gfreddie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(c = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

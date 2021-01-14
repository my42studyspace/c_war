/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bhugo             #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			new[i] = f(i, s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}

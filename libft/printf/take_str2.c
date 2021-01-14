/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_str2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:30:28 by ebulwer           #+#    #+#             */
/*   Updated: 2020/11/23 17:30:30 by ebulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*wchar_c(wchar_t c)
{
	char	*str;

	if (c <= 255)
	{
		str = ft_strnew(1);
		str[0] = c;
		return (str);
	}
	else
		str = NULL;
	return (str);
}

char	*make_char(char c)
{
	char *str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}

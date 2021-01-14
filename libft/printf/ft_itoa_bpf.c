/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:11 by rmaple            #+#    #+#             */
/*   Updated: 2020/11/15 19:19:19 by rmaple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_bpf(intmax_t nb, intmax_t base, char lr)
{
	if (nb < 0)
		return (ft_strplus("-", ft_uitoa_bpf((nb * -1), base, lr),
					0, 1));
	else
		return (ft_uitoa_bpf(nb, base, lr));
}

char	*ft_uitoa_bpf(uintmax_t nb, intmax_t bs, char lr)
{
	uintmax_t	temp;
	int			power;
	char		*str;

	temp = nb;
	power = 1;
	while (temp /= bs)
		power++;
	if (!(str = ft_strnew(power)))
		return (NULL);
	while (power--)
	{
		if (nb % bs >= 10)
			str[power] = nb % bs - 10 + lr;
		else
			str[power] = nb % bs + '0';
		nb /= bs;
	}
	return (str);
}

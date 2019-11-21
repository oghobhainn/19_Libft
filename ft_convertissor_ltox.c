/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertissor_dtox.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:11:39 by cmcgahan          #+#    #+#             */
/*   Updated: 2019/11/21 19:53:05 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			nbr_len(long nbr)
{
	int				len;

	len = (nbr < 0) ? 1 : 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

char				*ft_convertissor_ltox(long nbr, char xX)
{
	int				len;
	int				uporlow;
	int				sign;
	char			*hexa;

	uporlow = (xX == 'x') ? 87 : 55;
	if (nbr == -2147483648)
		return (ft_strdup("-80000000"));
	sign = (nbr < 0) ? -1 : 0;
	len = nbr_len(nbr);
	nbr = (sign == -1) ? -nbr : nbr;
	if (!(hexa = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sign == -1)
		hexa[0] = '-';
	hexa[len] = '\0';
	while (len-- > 0 - sign)
	{
		if ((nbr % 16) < 10)
			hexa[len] = (nbr % 16) + '0';
		else
			hexa[len] = (nbr % 16) + uporlow;
		nbr /= 16;
	}
	return (hexa);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertissor_utox.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:24:29 by cmcgahan          #+#    #+#             */
/*   Updated: 2019/11/04 16:30:53 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbr_len(unsigned int nbr)
{
	int			len;

	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

char			*ft_convertisser_utox(unsigned int nbr, char xX)
{
	int			len;
	int			uporlow;
	int			sign;
	char		*hexa;

	uporlow = (xX == 'x') ? 87 : 55;
	len = nbr_len(nbr);
	if (!(hexa = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	hexa[len] = '\0';
	while (len-- > 0)
	{
		if ((nbr % 16) < 10)
			hexa[len] = (nbr % 16) + '0';
		else
			hexa[len] = (nbr % 16) + uporlow;
		nbr /= 16;
	}
	return (hexa);
}

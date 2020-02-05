/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/10/08 17:56:00 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/28 16:25:57 by cmcgahan         ###   ########.fr       */
=======
/*   Created: 2020/01/30 13:41:09 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/30 13:41:18 by cmcgahan         ###   ########.fr       */
>>>>>>> 13cea1f60883c81dacc40260637f048ec99112f2
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_charsize_int(int n)
{
	int		size;

	size = 0;
	if (n <= 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char		*nb;
	int			len;
	int			t;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	t = n;
	len = ft_charsize_int(n);
	if (!(nb = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nb[len] = '\0';
	if (n < 0)
		n *= -1;
	while (len-- > 0)
	{
		nb[len] = n % 10 + '0';
		n /= 10;
	}
	if (t < 0)
		nb[0] = '-';
	return (nb);
}

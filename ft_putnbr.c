/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:12:52 by cmcgahan          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/11/04 14:23:37 by cmcgahan         ###   ########.fr       */
=======
/*   Updated: 2019/10/29 15:55:09 by cmcgahan         ###   ########.fr       */
>>>>>>> 08bee2c3006a659e46725c98712e0830485f3691
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = (unsigned int)-n;
		ft_putchar('-');
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

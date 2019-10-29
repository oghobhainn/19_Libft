/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:12:52 by cmcgahan          #+#    #+#             */
/*   Updated: 2019/10/29 15:14:19 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

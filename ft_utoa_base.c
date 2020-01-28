/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:45:55 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/28 16:30:52 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		int_size_base(unsigned long n, unsigned int base_size)
{
	int			size;

	size = 1;
	while (n >= base_size)
	{
		n /= base_size;
		size++;
	}
	return (size);
}

char			*ft_utoa_base(unsigned long n, const char *base)
{
	unsigned int	base_size;
	int				int_size;
	char			*new;
	int				i;

	i = 0;
	base_size = ft_strlen(base);
	int_size = int_size_base(n, base_size);
	if (!(new = malloc(sizeof(char) * (int_size + 1))))
		return (NULL);
	new[int_size] = '\0';
	while (n >= base_size)
	{
		new[int_size - i - 1] = (base[(int)(n - (n / base_size * base_size))]);
		n /= base_size;
		i++;
	}
	new[int_size - i - 1] = (base[(int)(n - (n / base_size * base_size))]);
	return (new);
}
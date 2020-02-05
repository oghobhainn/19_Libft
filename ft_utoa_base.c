/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/01/28 14:45:55 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/28 16:30:52 by cmcgahan         ###   ########.fr       */
=======
/*   Created: 2020/01/30 13:40:40 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/30 13:40:50 by cmcgahan         ###   ########.fr       */
>>>>>>> 13cea1f60883c81dacc40260637f048ec99112f2
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_size_base(unsigned long n, unsigned int base_size)
{
	int		size;

	size = 1;
	while (n >= base_size)
	{
		n /= base_size;
		size++;
	}
	return (size);
}

char		*ft_utoa_base(unsigned long n, const char *base)
{
	unsigned int	base_size;
	int				int_size;
	char			*new;
	int				i;

	i = 0;
	base_size = ft_strlen(base);
	int_size = int_size_base(n, base_size);
	if (!(new = malloc((int_size + 1) * sizeof(char))))
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

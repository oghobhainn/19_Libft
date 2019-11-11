/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intheset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:00:43 by cmcgahan          #+#    #+#             */
/*   Updated: 2019/11/11 16:03:48 by cmcgahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intheset(char const c, char const *set)
{
	int	i;

	i = 0;
	if (c && set)
	{
		while (set[i])
		{
			if (set[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

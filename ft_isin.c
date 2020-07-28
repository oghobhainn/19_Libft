#include "libft.h"

int		ft_isin(int c, char *set)
{
	while (set && *set)
	{
		if (*set == c)
			return (TRUE);
		set++;
	}
	return (FALSE);
}

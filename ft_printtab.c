#include "libft.h"

void	ft_printtab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &(tab[i][j]),1);
			j++;
		}
		write(1, "\n",1);
		i++
	}
}

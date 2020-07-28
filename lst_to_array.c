#include "libft.h"

char		**lst_to_array(t_list *lst)
{
	char	**array;
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (!(array = ft_calloc(sizeof(char*), i + 1)))
		return (NULL);
	
	tmp = lst;
	i = 0;
	while (tmp)
	{
		array[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	array[i] = NULL;
	return (array);
}

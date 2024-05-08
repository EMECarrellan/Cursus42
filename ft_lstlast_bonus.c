#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	int	final;

	final = ft_lstsize(lst) - 1;
	while (lst && final > 0)
	{
		lst = lst->next;
		final--;
	}
	return(lst);
}
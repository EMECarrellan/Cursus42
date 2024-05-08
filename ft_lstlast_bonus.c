#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	int	curr;

	curr = ft_lstsize(lst) - 1;
	while (lst && curr > 0)
	{
		lst = lst->next;
		curr--;
	}
	return(lst);
}
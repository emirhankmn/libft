#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int	main()
{
	t_list *node1;
	t_list *node2;

	node1 = ft_lstnew("4");
	node2 = ft_lstnew("2");

	ft_lstadd_front(&node1, node2);	

	printf("%s",(char *)node1->content);
	printf("%s",(char *)node1->next->content);
	return (0);
} */
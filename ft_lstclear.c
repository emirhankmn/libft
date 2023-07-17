/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:44:18 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 19:21:14 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del && lst)
	{
		while (*lst && lst)
		{
			temp = (*lst)->next;
			ft_lstdelone((*lst), del);
			*lst = temp;
		}
	}
}

/* void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst, *lst1, *lst2;

	lst = ft_lstnew("header");
	lst1 = ft_lstnew(" meader");
	lst2 = ft_lstnew(" teader");

	lst->next = lst1;
	lst1->next = lst2;
	while(lst != 0)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	while(lst != 0)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
} */
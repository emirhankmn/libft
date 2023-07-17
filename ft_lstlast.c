/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:17:54 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 12:26:15 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main()
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*res;

	lst = ft_lstnew("hem zaten hayatta");
	lst1 = ft_lstnew("ciddi bir espri");
	lst2 = ft_lstnew("seneler geçtikçe kalmiyor değeri");	
	lst->next = lst1;
	lst1->next = lst2;
	res = ft_lstlast(lst);
	printf("%s", res->content);
} */

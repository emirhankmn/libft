/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:33:02 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 15:22:08 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*res;

	if (!*lst)
		*lst = new;
	else
	{
		res = ft_lstlast(*lst);
		res->next = new;
	}
}

/* int	main()
{
	t_list	*lst, *lst1;

	lst = ft_lstnew("tabii");
	lst1 = ft_lstnew(" efendim");
	ft_lstadd_back(&lst,lst1);
	while(lst)
	{
		printf("%s", lst->content);
		lst = lst->next;
	}
} 
*/
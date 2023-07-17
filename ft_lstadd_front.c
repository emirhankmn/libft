/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:16:24 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 19:18:52 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
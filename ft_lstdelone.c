/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:32:14 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 15:28:52 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free (lst);
}

/* void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst; 
	
	lst = ft_lstnew("ya biz böyle yakalarlarsa");
	printf("%s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	printf("%s", (char *)lst->content);
} */
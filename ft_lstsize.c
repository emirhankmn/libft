/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:02:39 by eakman            #+#    #+#             */
/*   Updated: 2023/07/16 21:25:30 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return(i);
}

/* #include <stdio.h>

int	main()
{
	t_list	*arg1;
	t_list	*arg2;
	t_list	*arg3;
	arg1 = ft_lstnew("caresiz");
	arg2 = malloc(sizeof(t_list));
	arg3 = malloc(sizeof(t_list));
	arg1->next = arg2;
	arg2->next = arg3;

	printf("%d\n", ft_lstsize(arg1));
} */

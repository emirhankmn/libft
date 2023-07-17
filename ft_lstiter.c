/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:44:08 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 17:25:37 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	f(void *content)
{
	int	i;
	char	*str;

	str = (char *)content;
	i = 0;
	while(str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int	main()
{
	t_list	*lst, *lst1, *lst2;
	char	str[] = "BaSa SaR";
	char	data[] = " CUnKU";
	char	tmp[] = " BaSa SaR";
	lst = ft_lstnew(str);
	lst1 = ft_lstnew(data);
	lst2 = ft_lstnew(tmp);
	lst->next = lst1;
	lst1->next = lst2;
	ft_lstiter(lst, f);
	while(lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	return(0);
} */
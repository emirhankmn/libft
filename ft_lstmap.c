/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:54:51 by eakman            #+#    #+#             */
/*   Updated: 2023/07/17 19:21:18 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (lst == NULL || f == NULL )
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
}

/* void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	int	i;
	char	*str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main()
{
	t_list	*arg, *arg1, *arg2, *emr;
	char tmp[] = "GecTi";
	char smp[] = " ZamaN";
	char src[] = " EriDi SevdaM";
	arg = ft_lstnew(tmp);
	arg1 = ft_lstnew(smp);
	arg2 = ft_lstnew(src);
	arg->next = arg1;
	arg1->next = arg2;
	emr = ft_lstmap(arg, f, del);
	while(emr)
	{
		printf("%s", (char *)emr->content);
		emr = emr->next;
	}
	return(0);
} */
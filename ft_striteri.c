/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:12 by eakman            #+#    #+#             */
/*   Updated: 2023/07/11 17:19:14 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_ft(unsigned int a, char *b)
{
	*b = ft_toupper(*b);
}

#include <stdio.h>

int	main()
{
	char	a[] = "Oyun DegilKi Yasamak";

	ft_striteri(a, ft_ft);
	printf("%s", a);
} */

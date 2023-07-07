/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:48:50 by eakman            #+#    #+#             */
/*   Updated: 2023/07/07 10:43:48 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while(i < len)
	{
		if(((unsigned char *)s)[i] == (unsigned char)c)
			return((void *)(s + i));
		i++;
	}
	return(0);
}

/* int	main(void)
{
	char	a[] = "korkuyorum";

	printf("%s", ft_memchr(a, 'u', 5));
} */
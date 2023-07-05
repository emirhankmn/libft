/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:03:45 by eakman            #+#    #+#             */
/*   Updated: 2023/07/05 12:32:54 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	i;

	a = ft_strlen(dst);
	b = ft_strlen(src);
	i = 0;
	if (len == 0)
		return(a);
	if (len <= a)
		return(len + b);
	if (len > 0)
	{
		while(i < b && i + a < len - 1)
		{
			dst[a + i] = src[i];
			i++;
		}
		dst[a + 1] = '\0';
	}
	return( a + b );
}

/* int main()
{
	char	a[] = "sugar";
	char	b[] = "androm";

	printf("%zu\n", ft_strlcat(a, b, 6));
	printf("%s\n %s\n", a, b);
}
 */
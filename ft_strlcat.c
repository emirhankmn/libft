/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:03:45 by eakman            #+#    #+#             */
/*   Updated: 2023/07/12 17:31:03 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen((char *)src);
	i = 0;
	if (len <= d)
	{
		return (len + s);
	}
	while (src[i] != '\0' && d + i + 1 < len)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

/* int main()
{
	char	a[] = "sugar";
	char	b[] = "androm";

	printf("%zu\n", ft_strlcat(a, b, 6));
	printf("%s\n %s\n", a, b);
}
 */
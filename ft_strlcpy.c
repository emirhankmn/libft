/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:03:49 by eakman            #+#    #+#             */
/*   Updated: 2023/07/05 11:56:51 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcopy(char *dst, const char *src, size_t len)
{
	size_t	a;

	a = 0;
	if (len > 0)
	{
		while(src[a] && a < (len - 1))
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	printf("%s, %s", dst, src);
	return(ft_strlen(dst));
	
}

/* int	main()
{
	char	a[] = "hakkinda";
	char	b[] = "duymak";

	printf("%zu\n", ft_strlcopy(a, b, 6));
	printf("%s, %s", a, b);

} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:03:39 by eakman            #+#    #+#             */
/*   Updated: 2023/07/05 15:44:55 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	if(dst == NULL && src == NULL)
		return(0);
	i = 0;
	while(i < len)
	{
		((unsigned char *)dst) [i] = ((unsigned char *)src) [i];
		i++;
	}
	return(dst);
}

/* int	main()
{
	char a[] = "Sabahların";
	char b[] = "Anlamı";

	printf("%s\n", a);
	printf("%s", ft_memcpy(a, b, 5));
}  */
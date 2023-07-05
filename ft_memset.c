/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:33:31 by eakman            #+#    #+#             */
/*   Updated: 2023/07/05 20:23:33 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while(i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return(b);
}

/* int main()
{
	char c[] = "Bursa";
	char i = 't';
	
	printf("%s", ft_memset(c, i, 3));
} */
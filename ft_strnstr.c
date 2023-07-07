/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:03:48 by eakman            #+#    #+#             */
/*   Updated: 2023/07/07 20:03:50 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;
	unsigned int	s2_len;

	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return((char *)s1);
	if (len == 0)
		return(NULL);
	i= 0;
	while (i <= (len - s2_len) && s1[i])
	{
		if(ft_strncmp(&s1[i], s2, s2_len) == 0)
			return((char *) &s1[i]);
		i++;
	}
	return(0);
}

/* int  main()
{
	char	a[] = "Yere Dusen Aynalar Gibiyiz";
	char	b[] = "Ayna";

	printf("%s", ft_strnstr(a, b, 20));
} */
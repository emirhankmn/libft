/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:52 by eakman            #+#    #+#             */
/*   Updated: 2023/07/11 17:31:21 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_counter(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	return (count);
}

char	*ft_splitdup(const char *s, size_t start, size_t finish)
{
	char	*dest;
	size_t	i;
i
	i = 0;
	dest = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!dest)
		return (NULL);
	while (start < finish)
	{
		dest[i] = s[start];
		i++;
		start++;
	} 
	dest[i] = '\0';
	return (dest);
}

char	**ft_fill_split(char **dest, const char *s, char c)
{
	size_t	i;
	size_t	p1;
	size_t	start;

	i = 0;
	p1 = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || i == ft_strlen(s))
				dest[p1++] = ft_splitdup(s, start, i);
		}
		while (s[i] == c && s[i])
		{
			i++;
			start = i;
		}
	}
	dest[p1] = NULL;
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!dest)
		return (NULL);
	ft_fill_split(dest, s, c);
	return (dest);
}

/* int	main()
{
	char	a[] = "bana duslerimi geri ver";
	char	**b = ft_split(a, ' ');
	int 	i = 0;

	while(b[i] != NULL)
	{
		printf("%s\n", b[i]);
		i++;
	}

	return(0);
} */

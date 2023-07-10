#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

#include "libft.h"

size_t	ft_counter(const char *s, char c)
{
	size_t	count;

	count = 0;
	while(*s == c && *s)
		s++;
	while (*s)
	{
		while(*s && *s != c)
			s++;
		while(*s && *s == c)
			s++;
		count++;
	}
	return(count);
}

char	*ft_splitdup(const char *s, size_t start, size_t finish)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * finish - start + 1);
	if(!dst)
		return(NULL);
	while(start < finish)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return(dst);
}

char	**ft_fill_split(char **dst, const char *s, char c)
{
	size_t	i;
	size_t	p1;
	size_t	start;

	i = 0;
	p1 = 0;
	start = 0;
	while(s[i])
	{
		while(s[i] != c && s[i])
		{
			i++;
			if(s[i] == c || i == ft_strlen(s))
				dst[p1++] = ft_splitdup(s, start, i);
		}
		while(s[i == c && s[i]])
		{
			i++;
			start = i;
		}
	}
	dst[p1] = NULL;
	return(dst);
}

char	**ft_split(char const *s, char c)
{
	char **dst;

	if(!s)
		return(NULL);
	dst = (char **)malloc(sizeof(char *) * ft_counter(s, c) + 1);
	if(!dst)
		return(NULL);
	ft_fill_split(dst, s, c);
	return(dst);
}
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return(NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen((char *)s1);
	while(ft_strchr(set, s1[j]) && s1[i] != '\0')
		j--;
	return(ft_substr(s1, i, (j - i)));
}

/* int	main()
{
	char	a[] = "aaaahavadabulutaaa";

	printf("%s", ft_strtrim(a, "a"));
} */
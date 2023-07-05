#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	s_len;

	s_len = ft_strlen(str);
	while(s_len >= 0)
	{
		if(*str == (char)c)
			return((char *)str);
		str++;
		s_len--;
	}
	return(NULL);
}

int main()
{
	const char a[] = "Denizde";

	printf("%s", ft_strchr(a, 'n'));
}
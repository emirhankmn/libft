#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t i;

	i = 0;
	while(i < len)
	{
		if(*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return(*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return(0);
}

/* int main()
{
	char	a[] = "giden";
	char	b[] = "gitti";

	printf("%d", ft_memcmp(a, b , 5));
	return(0);
} */
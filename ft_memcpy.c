#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if(dst == NULL && src == NULL)
		return(0);

	i = 0;
	while(i < n)
	{
		((unsigned char *)dest) [i] = ((unsigned char *)src) [i];
		i++;
	}
	return(dest);
}

/* int	main()
{
	char a[] = "Sabahların";
	char b[] = "Anlamı";

	printf("%s\n", a);
	printf("%s", ft_memcpy(a, b, 5));
} */
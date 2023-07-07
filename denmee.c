#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

#include "libft.h"
//bellekte bos bir alan acar.
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	mem = malloc(size * nmemb);
	if (!mem)
		return (0);
	ft_bzero(mem, (size * nmemb));
	return (mem);
}

int main()
{
	char	a[] = "fbsdhjgfhsjd";

	printf("%s", ft_calloc(a, 15));
}
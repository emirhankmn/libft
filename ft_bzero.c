#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main()
{
	char a[] = "gokyuzu";

	ft_bzero(a, 3);
	printf("%c\n", a[0]);
	printf("%c\n", a[1]);
	printf("%c\n", a[2]);
	printf("%c\n", a[3]);
	printf("%c\n", a[4]);
}
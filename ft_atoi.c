#include "libft.h"

int	ft_atoi(const char *s)
{
	int i;
	int	sign;
	int	rev;

	
	if (!s)
		return(0);
	i = 0;
	while(s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
		i++;
	
	if(s[i] == '-')
		sign = -1;
	else if(s[i] == '+')
		sign = 1;
	i++;

	rev = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		rev = (rev * 10) + (s[i] - '0');
		i++;
	}
	return(rev * sign);
}

int	main()
{
	char	a[] = " 	 	-8724583725628736428";

	printf("%d", ft_atoi(a));

}
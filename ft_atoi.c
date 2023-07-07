/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:03:29 by eakman            #+#    #+#             */
/*   Updated: 2023/07/07 20:03:31 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int i;
	int	sign;
	long int	rev;

	
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
		if (rev > 2147483647)
			return(0);
		if (rev < -2147483648)
			return(0);
		i++;
	}
	return(rev * sign);
}

/* int	main()
{
	char	a[] = " 	 	74523762364565";

	printf("%d", ft_atoi(a));

} */
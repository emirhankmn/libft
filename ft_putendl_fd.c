/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:33 by eakman            #+#    #+#             */
/*   Updated: 2023/07/11 17:59:49 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <fcntl.h>
#include <unistd.h> */

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s. fd);
	write(fd, "\n", 1);
}
/*int main()
{
	int x = open("test.txt", 1);
	printf("%d",x);
	ft_putendl_fd("martin", x);
}*/
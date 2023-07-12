/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:17 by eakman            #+#    #+#             */
/*   Updated: 2023/07/12 13:28:09 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <fcntl.h>
#include <unistd.h>
#include <stdio.h> */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main()
{
	int fd;
	
	fd = open("evo.txt", O_CREAT | O_RDWR);
	printf("%d", fd);
	ft_putchar_fd('a', fd);
} */
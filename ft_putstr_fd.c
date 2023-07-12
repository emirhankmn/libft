/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:05 by eakman            #+#    #+#             */
/*   Updated: 2023/07/12 15:05:19 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <fcntl.h>
#include <unistd.h> */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write(fd, "(NULL)", 6);
	write(fd, s, ft_strlen(s));
}

/* int main()
{
	int fd = open("evo.txt", O_CREAT | O_RDWR);
    printf("%d", fd);
    ft_putstr_fd("yaralıkus",fd);
} */
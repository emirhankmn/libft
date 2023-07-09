/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:49:01 by eakman            #+#    #+#             */
/*   Updated: 2023/07/09 10:34:08 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}

/* int main()
{
	char a[] = "gokyuzu";

	ft_bzero(a, 3);
	printf("%c\n", a[0]);
	printf("%c\n", a[1]);
	printf("%c\n", a[2]);
	printf("%c\n", a[3]);
	printf("%c\n", a[4]);
} */
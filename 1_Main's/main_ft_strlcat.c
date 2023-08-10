/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:27:38 by macarval          #+#    #+#             */
/*   Updated: 2022/04/06 21:25:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t count);

int	main(void)
{
	char	dst[50] = "Teste - ";
	char	dst2[50] = "Teste - ";
	const char	src[] = "42 São Paulo";
	size_t	count = 12;

	printf("*strlcat*\ndstsize: %li\n", strlcat(dst, src, count));
	printf("src: %s\ndst: %s\n", src, dst);
	printf("\n*ft_strlcat*\ndstsize: %li\n", ft_strlcat(dst2, src, count));
	printf("src: %s\ndst: %s\n", src, dst2);
	return (0);
}

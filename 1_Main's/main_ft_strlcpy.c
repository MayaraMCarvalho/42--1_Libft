/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:23:45 by macarval          #+#    #+#             */
/*   Updated: 2022/04/05 23:39:08 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src,	size_t dstsize);

int	main(void)
{
	char	dst[20];
	char	dst2[20];
	char	src[] = "";
	size_t	dstsize = 8;

	printf("*strlcpy*\ndstsize: %li\n", strlcpy(dst, src, dstsize));
	printf("src: %s\ndst: %s\n", src, dst);
	printf("*ft_strlcpy*\ndstsize: %li\n", ft_strlcpy(dst2, src, dstsize));
	printf("src: %s\ndst: %s\n", src, dst2);
	return (0);
}

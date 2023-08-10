/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:19:46 by macarval          #+#    #+#             */
/*   Updated: 2022/04/07 03:39:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t len);

int	main(void)
{
	const char	src[50] = "http:";
	char		dest[50] = "Helllloooooo";
	char		dest2[50] = "Helllloooooo";
	size_t		len = 45;

	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, len);
	printf("After memcpy dest = %s\n", dest);
	printf("\nBefore ft_memcpy dest2 = %s\n", dest2);
	ft_memcpy(dest2, src, len);
	printf("After ft_memcpy dest2 = %s\n", dest2);
	return (0);
}

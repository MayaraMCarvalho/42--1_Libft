/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:38:20 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 17:37:43 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst,	const void *src, size_t	len);

int	main(void)
{
	char		dst[50] = "This is string.h library function";
	char		dst2[50] = "This is string.h library function";
	const void	*src = "Teste";
	size_t		len = 8;

	printf("memmove:\n%s\n", dst);
	memmove(dst, src, len);
	printf("%s\n\n", dst);
	printf("ft_memmove:\n%s\n", dst2);
	ft_memmove(dst2, src, len);
	printf("%s\n\n", dst2);
	printf("Compare: %i\n\n", strcmp(dst, dst2));
	return (0);
}

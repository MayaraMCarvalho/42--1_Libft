/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:46:15 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 16:49:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *b1, const void *b2, size_t len);

int	main(void)
{
	char	str1[] = "t\200";
	char	str2[] = "t\0";
	size_t	len = 2;

	printf("str1: %s\nstr2: %s\n", str1, str2);
	printf("memcmp: %i\n", memcmp(str1, str2, len));
	printf("ft_memcmp: %i\n", ft_memcmp(str1, str2, len));
	return (0);
}

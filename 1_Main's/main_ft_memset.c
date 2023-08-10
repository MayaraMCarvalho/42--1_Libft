/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:34:39 by macarval          #+#    #+#             */
/*   Updated: 2022/04/07 03:44:40 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t len);

int	main(void)
{
	char	str[] = "This is string.h library function";
	char	str2[] = "This is string.h library function";
	int		c = '$';
	size_t	len = 8;

	printf("memset:\n%s\n", str);
	memset(str, c, len);
	printf("%s\n\n", str);
	printf("ft_memset:\n%s\n", str2);
	ft_memset(str2, c, len);
	printf("%s\n\n", str2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:18:08 by macarval          #+#    #+#             */
/*   Updated: 2022/04/07 20:44:41 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *b, int c, size_t len);

int	main(void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	str2[] = "http://www.tutorialspoint.com";
	const char	ch = 's';
	char		*ret;
	char		*ret2;

	ret = memchr(str, ch, strlen(str));
	ret2 = ft_memchr(str2, ch, strlen(str2));
	printf("memchr: %s\n", ret);
	printf("ft_memchr: %s\n", ret2);
	return (0);
}

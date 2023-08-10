/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:18:54 by macarval          #+#    #+#             */
/*   Updated: 2022/04/07 02:10:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	const char	*bstr = "Foo Bar Baz";
	const char	*lstr = "";

	printf("strnstr: %s\n", strnstr(bstr, lstr, 2));
	printf("ft_strnstr: %s\n", ft_strnstr(bstr, lstr, 2));
	return (0);
}

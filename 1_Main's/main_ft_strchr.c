/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:03:09 by macarval          #+#    #+#             */
/*   Updated: 2022/04/04 15:25:22 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c);

int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '\0';

	printf("strchr: %s\n", strchr(str, ch));
	printf("ft_strchr: %s\n", ft_strchr(str, ch));
	return (0);
}

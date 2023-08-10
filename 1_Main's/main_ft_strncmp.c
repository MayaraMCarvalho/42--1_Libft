/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:41:19 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 19:34:00 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len);

int	main(void)
{
	const char	*str1 = "42!-2";
	const char	*str2 = "42!-23";

	printf("strncmp: %i\n", strncmp(str1, str2, 8));
	printf("ft_strncmp: %i\n", ft_strncmp(str1, str2, 8));
	return (0);
}

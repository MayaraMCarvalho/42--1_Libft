/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:03:29 by macarval          #+#    #+#             */
/*   Updated: 2022/04/08 22:24:12 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *str);

int	main(void)
{
	char	source[] = "42 São Paulo";

	printf("strdup: %s\n", strdup(source));
	printf("ft_strdup: %s\n", ft_strdup(source));
	printf("Compare: %i\n", strcmp(strdup(source), ft_strdup(source)));
	return (0);
}

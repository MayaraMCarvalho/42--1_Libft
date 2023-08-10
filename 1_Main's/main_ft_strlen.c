/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:03:10 by macarval          #+#    #+#             */
/*   Updated: 2022/04/03 16:20:24 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*str;

	str = "Libft - 42Sp (#Primeiro Projeto!!!)";
	printf("strlen: %li\n", strlen(str));
	printf("ft_strlen: %li\n", ft_strlen(str));
	return (0);
}

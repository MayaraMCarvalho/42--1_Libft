/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:50:32 by macarval          #+#    #+#             */
/*   Updated: 2022/04/23 15:49:12 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

static char	ft_toupper(unsigned int i, char c)
{
	if (!i && !c)
		return (c);
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

static char	ft_tolower(unsigned int i, char c)
{
	if (!i && !c)
		return (c);
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int	main(void)
{
	char const	*s = "Teste: ft_strmapi - 42Sp";

	printf("result: %s\n", ft_strmapi(s, ft_tolower));
	printf("result: %s\n", ft_strmapi(s, ft_toupper));
	return (0);
}

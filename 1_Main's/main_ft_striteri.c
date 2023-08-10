/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:05:58 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 20:37:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

static void	ft_tolower(unsigned int i, char *c)
{
	char res;

	if (c[i] >= 97 && c[i] <= 122)
		res = c[i] - 32;
	else if (c[i] >= 65 && c[i] <= 90)
		res = c[i] + 32;
	else
		res = c[i];
	printf("%c", res);
	c = &res;
}

int	main(void)
{
	char	*s = "TeSTe: FT_STiTeRi - 42SP";

	printf("Original: %s\n", s);
	ft_striteri(s, &ft_tolower);
	printf ("\nResult: %s\n", s);
	printf("\n");
	return (0);
}

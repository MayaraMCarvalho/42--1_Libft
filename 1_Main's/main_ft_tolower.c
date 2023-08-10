/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:55:20 by macarval          #+#    #+#             */
/*   Updated: 2022/04/03 17:56:39 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	int		i;
	char	str[] = "Tutorials ? Point";
	char	str2[] = "Tutorials ? Point";

	i = 0;
	printf("tolower: ");
	while (str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}
	putchar('\n');
	i = 0;
	printf("ft_tolower: ");
	while (str2[i])
	{
		putchar(ft_tolower(str2[i]));
		i++;
	}
	putchar('\n');
	return (0);
}

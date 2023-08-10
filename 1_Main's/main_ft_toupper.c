/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:42:23 by macarval          #+#    #+#             */
/*   Updated: 2022/04/03 17:54:15 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	int		i;
	char	str[] = "Tutorials ? Point";
	char	str2[] = "Tutorials ? Point";

	i = 0;
	printf("toupper: ");
	while (str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}
	putchar('\n');
	i = 0;
	printf("ft_toupper: ");
	while (str2[i])
	{
		putchar(ft_toupper(str2[i]));
		i++;
	}
	putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:44:51 by macarval          #+#    #+#             */
/*   Updated: 2022/04/12 05:23:29 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char const	*s = ".42a.SãoPaulo..#..teste.2ft.split...";
	char		c = '.';
	char		**res;
	int			i;

	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("res[%i]: %s\n", i, res[i]);
		i++;
	}
	free(res);
	return (0);
}

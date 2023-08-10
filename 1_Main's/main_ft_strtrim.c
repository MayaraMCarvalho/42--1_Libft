/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:46:50 by macarval          #+#    #+#             */
/*   Updated: 2022/04/22 16:50:31 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	*s1 = "eu gosto de suco de maçã e também de baguetes";
	char const	*set = "u deegogsteeeu  u  se etu";

	printf("Result: %s\n", ft_strtrim(s1, set));
	return (0);
}

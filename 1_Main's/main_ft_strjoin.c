/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:16:30 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 19:55:30 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char const	*s1 = "lorem ipsum";
	char const	*s2 = "dolor sit amet";

	printf("Result: %s\n", ft_strjoin(s1, s2));
	return (0);
}

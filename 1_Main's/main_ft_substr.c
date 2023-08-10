/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:32:49 by macarval          #+#    #+#             */
/*   Updated: 2022/04/08 23:02:57 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char const		*s = "Teste substr - 42Sp";
	unsigned int	start;
	size_t			len;

	len = 7;
	start = 6;
	printf("String: %s\nSubstring: %s\n", s, ft_substr(s, start, len));
	return (0);
}

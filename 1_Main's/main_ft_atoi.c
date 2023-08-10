/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:38:01 by macarval          #+#    #+#             */
/*   Updated: 2022/04/08 19:52:42 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	*str;

	str = "  \n  +8a85s";
	printf("atoi:\n String = %s\n Result = %d\n", str, atoi(str));
	printf("\nft_atoi:\n String = %s\n Result = %d\n", str, ft_atoi(str));
	return (0);
}

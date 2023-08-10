/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:33:51 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 17:40:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int main ()
{
	int var1 = 'k';
	int var2 = '#';
	int var3 = '\t';
	int var4 = ' ';
   
	printf("isprint = %i\n", isprint(var1));
	printf("ft_isprint = %i\n\n", ft_isprint(var1));
	
	printf("isprint = %i\n", isprint(var2));
	printf("ft_isprint = %i\n\n", ft_isprint(var2));

	printf("isprint = %i\n", isprint(var3));
	printf("ft_isprint = %i\n\n", ft_isprint(var3));
	
	printf("isprint = %i\n", isprint(var4));
	printf("ft_isprint = %i\n\n", ft_isprint(var4));
	return(0);
}

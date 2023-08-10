/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:14:28 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 17:37:02 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int main ()
{
	int	var1 = 'A';
	int	var2 = '2';
	int	var3 = '\t';
	int	var4 = ' ';
   
	printf("isalpha = %i\n", isalpha(var1));
	printf("ft_isalpha = %i\n\n", ft_isalpha(var1));
	
	printf("isalpha = %i\n", isalpha(var2));
	printf("ft_isalpha = %i\n\n", ft_isalpha(var2));
	
	printf("isalpha = %i\n", isalpha(var3));
	printf("ft_isalpha = %i\n\n", ft_isalpha(var3));

	printf("isalpha = %i\n", isalpha(var4));
	printf("ft_isalpha = %i\n\n", ft_isalpha(var4));

	return(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_alnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:14:12 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 17:36:55 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int main ()
{
	int	var1 = 'A';
	int	var2 = '2';
	int	var3 = '\t';
	int	var4 = ' ';
   
	printf("isalnum = %i\n", isalnum(var1));
	printf("ft_isalnum = %i\n\n", ft_isalnum(var1));
	
	printf("isalnum = %i\n", isalnum(var2));
	printf("ft_isalnum = %i\n\n", ft_isalnum(var2));
	
	printf("isalnum = %i\n", isalnum(var3));
	printf("ft_isalnum = %i\n\n", ft_isalnum(var3));

	printf("isalnum = %i\n", isalnum(var4));
	printf("ft_isalnum = %i\n\n", ft_isalnum(var4));
	
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:14:45 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 17:37:16 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int main ()
{
	int var1 = 'h';
   	int var2 = '2';
   
	printf("isdigit = %i\n", isdigit(var1));
	printf("ft_isdigit = %i\n\n", ft_isdigit(var1));
	
	printf("isdigit = %i\n", isdigit(var2));
	printf("ft_isdigit = %i\n\n", ft_isdigit(var2));
	
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:14:45 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 17:37:08 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int main ()
{
	int var1 = '+';
   	int var2 = '~';
   
	printf("isascii = %i\n", isascii(var1));
	printf("ft_isascii = %i\n\n", ft_isascii(var1));
	
	printf("isascii = %i\n", isascii(var2));
	printf("ft_isascii = %i\n\n", ft_isascii(var2));

	return(0);
}

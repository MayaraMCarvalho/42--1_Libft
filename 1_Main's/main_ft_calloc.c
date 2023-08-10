/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:08:01 by macarval          #+#    #+#             */
/*   Updated: 2022/04/08 20:56:55 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t number, size_t size);

int	main(void)
{
	int	*buffer;
	int	*buffer2;
	int	n;

	n = 40;
	buffer = (int *)calloc(n, sizeof(int));
	if (buffer)
	{
		printf("calloc: %i\n", *buffer);
		*buffer = 1;
		printf("calloc: %i\n", *buffer);
	}
	free(buffer);
	buffer2 = (int *)ft_calloc(n, sizeof(int));
	if (buffer2)
	{
		printf("ft_calloc: %i\n", *buffer2);
		*buffer = 16841864;
		printf("ft_calloc: %i\n", *buffer2);
	}
	free(buffer2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:38:47 by macarval          #+#    #+#             */
/*   Updated: 2022/04/07 16:34:47 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *b, size_t len);

int	main(void)
{
	char	buffer[] = "teste";
	char	buffer2[] = "teste";
	size_t	len = 0;

	printf("bzero:\nBefore: %s\n", buffer);
	bzero(buffer, len);
	printf("After: %s\n", buffer);
	printf("\nft_bzero:\nBefore: %s\n", buffer2);
	ft_bzero(buffer2, len);
	printf("After: %s\n", buffer2);
	printf("\nCompare: %i\n", strcmp(buffer, buffer2));
	return (0);
}

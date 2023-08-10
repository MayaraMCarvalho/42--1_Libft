/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:41:27 by macarval          #+#    #+#             */
/*   Updated: 2022/04/20 23:48:31 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putstr_fd("Teste - 42Sp", fd);
	close(fd);
	return (0);
}

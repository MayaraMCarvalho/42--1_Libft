/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:03:37 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 00:12:01 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putendl_fd("Teste - 42Sp", fd);
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:13:42 by macarval          #+#    #+#             */
/*   Updated: 2022/04/21 00:38:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putnbr_fd(-42, fd);
	close(fd);
	return (0);
}

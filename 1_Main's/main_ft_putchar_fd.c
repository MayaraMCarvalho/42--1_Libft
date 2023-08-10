/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:48:34 by macarval          #+#    #+#             */
/*   Updated: 2022/04/20 23:31:37 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putchar_fd('#', fd);
	close(fd);
	return (0);
}

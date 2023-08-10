/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:11:14 by macarval          #+#    #+#             */
/*   Updated: 2022/04/24 03:15:57 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int	main(void)
{
	void	*t;

	t = "42 Sp!!!!!";
	printf("content: %s\n", (char *) ft_lstnew(t)->content);
	printf("next: %p\n", ft_lstnew(t)->next);
	return (0);
}

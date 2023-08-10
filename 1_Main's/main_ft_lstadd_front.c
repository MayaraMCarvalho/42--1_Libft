/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 03:26:39 by macarval          #+#    #+#             */
/*   Updated: 2022/04/24 19:02:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

int	main(void)
{
	t_list	*new;
	t_list	*old;
	t_list	*p;

	new = (t_list *) malloc (sizeof (t_list));
	if (!new)
		return (0);
	new->next = NULL;
	new->content = "Novo";
	old = (t_list *) malloc (sizeof (t_list));
	if (!old)
		return (0);
	old->next = NULL;
	old->content = "Existente";
	ft_lstadd_front(&old, new);
	p = old;
	while (p != NULL)
	{
		printf("content = %s\n", (char *) p->content);
		p = p->next;
	}
	return (0);
}

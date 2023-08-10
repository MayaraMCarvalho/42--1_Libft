/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:42:46 by macarval          #+#    #+#             */
/*   Updated: 2022/04/24 20:00:19 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*start(void)
{
	return (NULL);
}

t_list	*insert(t_list *new, char *s)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof (t_list));
	if (!node)
		return (0);
	node->content = s;
	node->next = new;
	return (node);
}

int	main(void)
{
	t_list	*new;
	t_list	*p;

	new = start();
	new = insert(new, "42");
	new = insert(new, "Rio");
	new = insert(new, "Sp");
	new = insert(new, "Lisboa");
	new = insert(new, "Madri");
	p = new;
	while (p != NULL)
	{
		printf("content = %s\n", (char *) p->content);
		p = p->next;
	}
	p = ft_lstlast(new);
	while (p != NULL)
	{
		printf("\nLast Element = %s\n", (char *) p->content);
		p = p->next;
	}
	return (0);
}

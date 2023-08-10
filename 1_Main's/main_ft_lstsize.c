/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:05:19 by macarval          #+#    #+#             */
/*   Updated: 2022/04/24 19:37:22 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst);

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
	new = insert(new, "Element 1");
	new = insert(new, "Element 2");
	new = insert(new, "Element 3");
	new = insert(new, "Element 4");
	new = insert(new, "Element 5");
	p = new;
	while (p != NULL)
	{
		printf("content = %s\n", (char *) p->content);
		p = p->next;
	}
	printf("Nº Elements = %i\n", ft_lstsize(new));
	return (0);
}

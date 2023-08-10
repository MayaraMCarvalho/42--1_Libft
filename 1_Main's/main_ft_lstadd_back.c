/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:00:47 by macarval          #+#    #+#             */
/*   Updated: 2022/04/26 01:48:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new);

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

void	print_lst(t_list *lst)
{
	while (lst != NULL)
	{
		printf("content = %s\n", (char *) lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*new;
	t_list	*node;

	new = start();
	new = insert(new, "42");
	new = insert(new, "Rio");
	new = insert(new, "Sp");
	new = insert(new, "Lisboa");
	new = insert(new, "Madri");
	print_lst(new);
	printf("\n");
	node = start();
	node = insert(node, "Passou!!!");
	ft_lstadd_back(&new, node);
	print_lst(new);
	return (0);
}

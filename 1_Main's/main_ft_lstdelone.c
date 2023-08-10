/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:53:05 by macarval          #+#    #+#             */
/*   Updated: 2022/04/28 00:10:35 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *));

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
		if (lst->content == NULL)
			return ;
		lst = lst->next;
	}
}

void	del(void *lst)
{
	if (lst)
		printf("%s\n", (char *) lst);
}

int	main(void)
{
	t_list	*new;
	t_list	*t;

	new = start();
	new = insert(new, "42");
	new = insert(new, "Rio");
	new = insert(new, "Sp");
	new = insert(new, "Lisboa");
	new = insert(new, "Madri");
	print_lst(new);
	t = new->next;
	printf("\n");
	ft_lstdelone(new, del);
	new = t;
	print_lst((t_list *)new);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:28:45 by macarval          #+#    #+#             */
/*   Updated: 2022/04/29 00:21:14 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

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

void	*f(void *lst)
{
	t_list	*node;
	char	*str;
	char	*c;
	int		i;

	i = 0;
	node = (t_list *) malloc (sizeof (t_list));
	if (!node)
		return (0);
	str = (char *) lst;
	c = (char *) malloc (sizeof(char) * strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			c[i] = str[i] - 32;
		else if (str[i] >= 65 && str[i] <= 90)
			c[i] = str[i] + 32;
		else
			c[i] = str[i];
		i++;
	}
	node->content = c;
	node = node->content;
	return (node);
}

void	del(void *lst)
{
	if (lst)
		return ;
}

int	main(void)
{
	t_list	*old;
	t_list	*new;

	old = NULL;
	old = insert(old, "42");
	old = insert(old, "rio");
	old = insert(old, "sp");
	old = insert(old, "lisboa");
	old = insert(old, "madri");
	new = NULL;
	new = ft_lstmap(old, f, del);
	print_lst(old);
	printf("\n");
	print_lst(new);
	return (0);
}

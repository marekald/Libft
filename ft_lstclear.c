/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:02:36 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 18:32:39 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
/* 
void	del(void *content)
{
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*new_node;

	lst = NULL;
	new_node = ft_lstnew("Hello");
	ft_lstadd_front(&lst, new_node);
	new_node = ft_lstnew("World");
	ft_lstadd_front(&lst, new_node);
	printf("Antes:\n");
	while (lst)
	{
		printf("\t%s\n", (char *)lst->content);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	printf("Despues:\n");
	while (lst)
	{
		printf("\t%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
 */
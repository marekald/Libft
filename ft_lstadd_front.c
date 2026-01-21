/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:45:50 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 16:03:07 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/* 
#include <stdio.h>
int	main(void)
{
	t_list	*list;
	t_list	*new;

	list = ft_lstnew("Hello");
	new = ft_lstnew("World");
	ft_lstadd_front(&list, new);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
}
 */
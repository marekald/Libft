/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:35:34 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:35 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && new)
	{
		temp = *lst;
		if (!temp)
			*lst = new;
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
	}
}
/* 
#include <stdio.h>
int	main()
{
	t_list	*list = ft_lstnew("Hello");
	t_list	*new = ft_lstnew("World");

	ft_lstadd_back(&list, new);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return (0);
}
 */
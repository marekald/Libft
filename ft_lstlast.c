/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:22:23 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 17:34:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp->next != NULL)
		{
			temp = temp->next ;
		}
		return (temp);
	}
	return (NULL);
}
/* 
#include <stdio.h>
int	main()
{
	t_list	*list = ft_lstnew("hello");
	t_list	*list2 = ft_lstnew("world");
	t_list	*list3 = ft_lstnew("programed");
	t_list	*list4 = ft_lstnew("to");
	t_list	*list5 = ft_lstnew("exist");

	list->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = list5;
	list5->next = NULL;
	printf("size: %s\n", (char *)ft_lstlast(list)->content);
	return (0);
}
 */
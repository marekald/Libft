/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:01:59 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 16:19:10 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>
int	main()
{
	char	*str = "hello";
	t_list	*list = ft_lstnew(str);
	t_list	*list2 = ft_lstnew(str);
	t_list	*list3 = ft_lstnew(str);
	t_list	*list4 = ft_lstnew(str);

	list->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;
	printf("size: %d\n", ft_lstsize(list));
	return (0);
}
 */
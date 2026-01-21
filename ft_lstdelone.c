/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:02:39 by marekald          #+#    #+#             */
/*   Updated: 2026/01/21 18:32:30 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del((lst)->content);
		free(lst);
		lst = NULL;
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

	lst = ft_lstnew(ft_strdup("Hello World!"));
	printf("List node content before deletion: %s\n", lst->content);
	ft_lstdelone(lst, del);
	printf("List node content after deletion: %s\n", lst->content);
	return (0);
}
 */
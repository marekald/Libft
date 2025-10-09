/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:07:45 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:08:23 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc(sizeof(char), (ft_strlen(s1) + 1));
	if (!s)
		return (0);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[ft_strlen(s1)] = 0;
	return (s);
}
/*
int main()
{
	char a[] = "pepaso";
    char *p=ft_strdup(a);
    printf("%s\n",p);
	printf("%s\n",strdup(a));
}
*/

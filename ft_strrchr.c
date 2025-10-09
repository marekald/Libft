/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:06:25 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:08:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = ((char *) s);
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*
int	main()
{
	char 	str[] = "esto es super increible";
	char	a = 'i';
	char	*b;

	b = ft_strrchr(str, a);
	if (b != NULL)
		printf("ft_		%s\n", b);
	else
		printf("ft_		NULL");
	printf("original	%s", strrchr(str, a));
}
*/

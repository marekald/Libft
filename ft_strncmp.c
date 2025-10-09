/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:06:37 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 11:06:39 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int	main()
{
//	char	*s1 = "Hola";
//	char	*s2 = "Holi";
//	size_t	n = 4;
	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
 	char *s2 = "\x12\x02";
 	size_t n = 6;

	printf("ft_%i\n", ft_strncmp(s1, s2, n));
	printf("original%i\n", strncmp(s1, s2, n));
}
*/

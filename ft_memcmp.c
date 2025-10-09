/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:37:25 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 10:37:28 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = (const unsigned char *) s1;
	b = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return ((a[i]) - (b[i]));
		i++;
	}
	if (i != n)
		return (a[i] - b[i]);
	return (0);
}
/*
int	main()
{
	char	*str1 = "t\200";
	char	*str2 = "t\0";
	int		n = 2;

	printf("Original: %i\n", memcmp(str1, str2, n));
	printf("ft_casa: %i\n", ft_memcmp(str1, str2, n));
}*/

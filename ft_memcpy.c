/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:37:35 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 10:37:37 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*j;
	unsigned char	*k;
	size_t			i;

	i = 0;
	j = (unsigned char *)dst;
	k = (unsigned char *)src;
	if (k == NULL && j == NULL)
		return (NULL);
	while (i < n)
	{
		j[i] = k[i];
		i++;
	}
	return (dst);
}
/*
int	main()
{
	char str[] = "Nitram";
	char dst[] = "Martin";

	ft_memcpy(dst, str, 3);
	int i = 0;
	while (dst[i] != '\0')
	{
    	write(1, &dst[i], 1);
    	i++;
	}
}*/

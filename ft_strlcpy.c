/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:06:57 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 11:06:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (dstsize == 0)
		return (n);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

/*
int main()
{
	char src[] = "Hello world";
	char dst[20];
	int	i = 0;

	write(1, "\n", 1);
	ft_strlcpy(dst, src, 9);
	i = 0;
	while(dst[i] != '\0')
	{
		write(1, &dst[i], 1);
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:37:42 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 10:37:44 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (s < d && s + len > d)
	{
		s += len;
		d += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int	main()
{
	char dst[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 9);
	printf("After memmove dst = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 9);
	printf("After ft_memmove dst = %s, src = %s\n", dst, src);
	return(0);
}
*/

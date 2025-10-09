/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:13:42 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:06:30 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

/* int	main(void)
{
	char mem[] = "adfa";
	printf("antes: %s\n", mem);
	ft_bzero(mem, 5);
	printf("despues: %s\n", mem);
} */

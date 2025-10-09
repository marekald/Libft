/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:07:34 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 11:07:35 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* 
void	funcion(unsigned int a, char *c)
{
	*c = a + *c;
}

int	main(void)
{
	char	s[] = "AAAA";

	printf("Original String: %s\n", s);
	ft_striteri(s, &funcion);

	printf("Mapped String: %s\n", s);
	return (0);
} */
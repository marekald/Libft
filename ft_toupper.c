/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:05:32 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 11:05:35 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}	
	else
		return (c);
}
/*
int	main()
{
	int		i;
	char	a[] = "abcdeffghijklmnopqrstuvwyz";
	char	b;
	i = 0;
	while(a[i])
	{
		b = ft_toupper(a[i]);
		write(1, &b, 1);
		i++;
	}
}
*/

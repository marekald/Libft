/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:05:39 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:09:13 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main()
{
	int		i;
	char	a[] = "ABCDEFGHIJKLMNOPQRSTUVWYZ";
	char	b;
	i = 0;
	while(a[i])
	{
		b = ft_tolower(a[i]);
		write(1, &b, 1);
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:45:53 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:07:09 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;

	len = get_len(n);
	c = malloc(len * sizeof(char));
	return (c);
}

/* int	main(void)
{
	int	n = 1234;
	printf("int: %i\nstr: %s", n, ft_itoa(n));
} */

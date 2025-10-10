/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:41:16 by marekald          #+#    #+#             */
/*   Updated: 2025/10/10 16:53:04 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (c[i] != '\0' && ((c[i] >= 7 && c[i] <= 13) || c[i] == 32))
		i++;
	if (c[i] != '\0' && (c[i] == '-' || c[i] == '+'))
	{
		if (c[i] == '-')
			neg = -1;
		i++;
	}
	while (c[i] != '\0')
	{
		if (c[i] < '0' || c[i] > '9')
			break ;
		num = 10 * num + (c[i] - 48);
		i++;
	}
	return (num * neg);
}

/* int	main (void)
{
	printf("%i\n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%i\n", atoi("\t\n\r\v\f  469 \n"));
} */

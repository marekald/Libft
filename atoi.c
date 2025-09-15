/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:41:16 by marekald          #+#    #+#             */
/*   Updated: 2025/09/15 18:22:29 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *c)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (c[i] != '\0' && (c[i] >= 7  && c[i] <= 13))
		i++;
	while (c[i] != '\0' && (c[i] == '-' || c[i] == '+'))
	{
		if (c[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (c[i] != '\0')
	{
		if (c[i] <= '0' || c[i] >= '9')
			break ;
		num = 10 * num + (c[i] - 48);
		i++;
	}
	return (num * neg);
}

int	main (void)
{
	printf("%i\n", ft_atoi("---+112"));
}

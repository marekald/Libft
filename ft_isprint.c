/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:44:49 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 13:35:58 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint (int c)
{
	if (c <= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* int	main()
{
	int	n = 165;
	printf("n:%i is %i", n, ft_isprint(n));
} */
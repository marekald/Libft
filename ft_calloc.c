/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:35:10 by marekald          #+#    #+#             */
/*   Updated: 2025/10/08 14:17:47 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t i, size_t size)
{
	void			*arr;
	unsigned char	*str;
	size_t			j;

	j = 0;
	arr = malloc(i * size);
	if (arr == NULL)
		return (arr);
	str = (unsigned char *)arr;
	while (j < (i * size))
	{
		str[j] = 0;
		j++;
	}
	return (arr);
}

/* int	main(void)
{
	int *arr = ft_calloc(4, sizeof(int));
	int	i = 0;

	if (arr != NULL)
	{
		while (i < 5)
		{
			printf("%i ", arr[i]);
			i++;
		}
	}
	else
		printf("nope\n");
} */

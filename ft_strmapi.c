/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:06:42 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 11:06:44 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s, ft_strlen(s)+1);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	funcion(unsigned int a, char c)
{
	return (a + c);
}

int	main()
{
	char	*s = "AAAA";
	char	*result;

	printf("Original String: %s\n", s);
	result = ft_strmapi(s, &funcion);
	if (result != NULL)
	{
		printf("Mapped String: %s\n", result);
		free(result);
	}
	else
		printf("Error: ft_strmapi returned NULL.\n");
	return (0);
}
*/
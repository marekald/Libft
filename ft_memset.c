/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:37:48 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 10:37:50 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*j;
	size_t			i;

	i = 0;
	j = (unsigned char *)b;
	while (len > i)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
   char str[50] = "Esta es una funcion muy bonica";


   printf("String original: %s\n", str);
   memset(str + 5,'$', 4);
   printf("String modificado memset:    %s\n", str);


   char str1[50] = "Esta es una funcion muy bonica";
   ft_memset(str1 + 5,'$', 4);
   printf("String modificado ft_memset: %s\n", str1);
   return(0);
}
*/

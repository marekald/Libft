/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:38:21 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 14:00:11 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (dstsize == 0)
		return (n);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	str[len] = '\0';
	return (str);
}

int	ft_countword(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		num_words++;
		while (s[i] != c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] == c)
			i++;
	}
	return (num_words);
}

void	ft_clean(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free (array[i]);
		i++;
	}
	free (array);
}

int	fill_words(char **array, char const *s, char c)
{
	int	start;
	int	end;
	int	word_index;

	end = 0;
	word_index = 0;
	while (word_index < ft_countword(s, c))
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		array[word_index] = ft_substr(s, start, end - start);
		if (!array[word_index])
		{
			ft_clean(array);
			return (0);
		}
		++word_index;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**array;

	num_words = ft_countword(s, c);
	array = malloc(sizeof(char *) * (num_words + 1));
	if (!array)
		return (NULL);
	array[num_words] = NULL;
	if (!fill_words(array, s, c))
		return (NULL);
	return (array);
}

/* int main()
{
    char input_string[] = "Hello,World,This,is,a,test";
    char delimiter = ',';
    char **result = ft_split(input_string, delimiter);

    if (result)
	{
		for (int i = 0; result[i] != NULL; i++)
		    printf("Word %d: %s\n", i + 1, result[i]);
        ft_clean(result);
    }
	else
		printf("Error al dividir la cadena.\n");
    return 0;
} */


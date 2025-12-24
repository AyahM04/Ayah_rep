/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoqaily <aoqaily@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 15:48:20 by aoqaily           #+#    #+#             */
/*   Updated: 2025/12/24 15:48:26 by aoqaily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *str, char del)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*str)
	{
		if (*str != del && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*str == del)
			i = 0;
		str++;
	}
	return (count);
}

static char	*fill(char const *str, int start, int end)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (start < end)
	{
		s[i] = str[start];
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

static void	free_all(char **array, int count)
{
	while (count > 0)
	{
		free(array[count - 1]);
		count--;
	}
	free(array);
}

static int	word_len(char const *str, char del, int i)
{
	int	j;

	j = i;
	while (str[j] && str[j] != del)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		word_index;

	i = 0;
	word_index = 0;
	array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			array[word_index] = fill(s, i, word_len(s, c, i));
			if (!array[word_index])
			{
				free_all(array, word_index);
				return (NULL);
			}
			word_index++;
		}
		i++;
	}
	array[word_index] = NULL;
	return (array);
}

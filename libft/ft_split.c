/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:29:19 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 02:05:52 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static void	free_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && count_words(s, c) != 0)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			res[j++] = ft_substr(s, start, (i - start));
		if (!res[j - 1])
			return (free_words(res), NULL);
	}
	res[j] = NULL;
	return (res);
}

/*int main()
{
	char **res;
	int	i;

	res = ft_split("hello!", ' ');
	while(res[i])
	{
		printf("%s \n",res[i++]);
	}
	printf("%s \n",res[i]);
}*/
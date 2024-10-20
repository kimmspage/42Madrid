/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:54 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:47:35 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == (char)c)
			return ((char *)s + slen);
		slen--;
	}
	return (0);
}
/*
int	main(void)
{
	const char *str = "holi apruebame";
	char c = 'a';

	char *result = ft_strrchr(str, c);
	//printf("%i: %s\n", c, result ? result : "false");

	int i = 0;
	printf("0: %i", result[i]);
	while(result[i])
	{
		printf("%i : %c", result[i], result[i]);
		i++;
	}

	return (0);
}*/
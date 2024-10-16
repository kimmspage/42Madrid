/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:29:33 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:12 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);


	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;


	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	return (ft_substr(s1, start, end - start));
}

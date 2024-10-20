/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:48 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:47:32 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	while (s < n && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		s++;
	}
	if (s == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	printf("%i", ft_strncmp("hey", "he", 3));
}
*/
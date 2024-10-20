/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:35 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:47:10 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
/*
int main(void)
{
    char str[] = "apruebame";
    
    char *result = ft_strchr(str, 'b');

    if (result)
        printf("found: %s\n", result);
    else
        printf("not found\n");

    return 0;
}*/
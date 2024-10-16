/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:35 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:04:49 by kimberlydun      ###   ########.fr       */
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

int main(void)
{
    const char *str = "Hola, mundo!"; 
    char c = 'm';                     


    char *result = ft_strchr(str, c);

    if (result)
        printf("El carácter '%c' se encuentra en: '%s'\n", c, result);
    else
        printf("El carácter '%c' no se encontró en la cadena.\n", c);

    return 0;
}
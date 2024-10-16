/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:30 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:12:35 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return 0;
}

int main(void)
{
    const char str1[] = "Hola, mundo!";
    const char str2[] = "Hola, todos!";
    size_t n = 5;  // Comparar los primeros 5 bytes

    // Comparar los bloques de memoria
    int result = ft_memcmp(str1, str2, n);

    // Mostrar el resultado
    if (result == 0)
        printf("Los primeros %zu bytes son iguales.\n", n);
    else
        printf("Los primeros %zu bytes son diferentes.\n", n);

    return 0;
}
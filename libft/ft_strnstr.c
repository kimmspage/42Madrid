/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:50 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:07 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;

    for (i = 0; i < len && haystack[i]; i++)
    {
        j = 0;
        while (haystack[i + j] && needle[j] && (i + j) < len && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return (char *)(haystack + i);
    }
    return NULL;
}

int main(void)
{
    char haystack[] = "Hola, mundo!";
    char needle[] = "mun";

    char *result = ft_strnstr(haystack, needle, 10);

    printf("%s\n", result ? result : "false");

    return 0;
}

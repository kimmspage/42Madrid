/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:29:25 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:04:45 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;
    char *result;

    if (!s1 || !s2) 
        return (NULL);

    len1 = ft_strlen(s1); 
    len2 = ft_strlen(s2); 

    result = malloc(len1 + len2 + 1); 
    if (!result)
        return (NULL);

   
    ft_strlcpy(result, s1, len1 + 1);
   
    ft_strlcpy(result + len1, s2, len2 + 1);

    return (result);
}

int main(void)
{
    char *result;

    result = ft_strjoin("Hola, ", "mundo!");
    if (result)
    {
        printf("%s\n", result); 
        free(result); 
    }

    return 0;
}
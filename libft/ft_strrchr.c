/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:54 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 14:38:10 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last = s;  
        s++;
    }
    if (c == '\0')
        return ((char *)s);        
    return ((char *)last); 
    

}

int main(void)
{
    const char *str = "holi apruebame";
    char c = 'o';

    char *result = ft_strrchr(str, c);
    printf("%c': %s\n", c, result ? result : "false");

    return 0;
}
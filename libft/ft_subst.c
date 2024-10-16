/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:29:36 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:23 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dstr;
    size_t slen;

    slen = ft_strlen(s);


    if (start >= slen)
        return (ft_calloc(1, sizeof(char)));


    if (len > slen - start)
        len = slen - start;

    dstr = malloc(len + 1); 
    if (!dstr)
        return (NULL);

    ft_strlcpy(dstr, s + start, len + 1);
    return (dstr);
}

int main(void)
{
    char *c;

    c = ft_substr("holis corazones!", 7, 5);
    printf("%s\n", c); 
    free(c); 
    
    return 0;
}
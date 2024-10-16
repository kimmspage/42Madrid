/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:51:55 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:07:51 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)s;
    while (n--)
    {
        *ptr++ = 0;
    }
}

int main(void)
{
    char str[10] = "jeje"; 

    ft_bzero(str, 5);

    printf("new str: '%s'\n", str);

    return 0;
}

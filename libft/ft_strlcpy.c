/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:43 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/15 01:56:19 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"












size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;
    while (src[src_len])
        src_len++;
    if (size == 0)
        return (src_len);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}
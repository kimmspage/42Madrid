/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:37 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:04:47 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    len = ft_strlen(s1);  
    dup = (char *)malloc(len + 1); 
    if (!dup)
        return (NULL);

    ft_strlcpy(dup, s1, len + 1);  
    return (dup);  
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:51:39 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/25 20:52:47 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t gnl_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return (len);
}

char *gnl_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (NULL);
}

char *gnl_strjoin(char *s1, char *s2)
{
    char *joined;
    size_t i = 0, j = 0, len1 = gnl_strlen(s1), len2 = gnl_strlen(s2);

    joined = (char *)malloc(len1 + len2 + 1);
    if (!joined)
        return (NULL);
    while (s1 && s1[i])
        joined[i] = s1[i++];
    while (s2 && s2[j])
        joined[i++] = s2[j++];
    joined[i] = '\0';
    free(s1);
    return (joined);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/24 11:20:44 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *append_buffer(char *stored, char *buffer)
{
    char *new_str;
    size_t i = 0, j = 0, len = 0;

    while (stored && stored[len])
        len++;
    while (buffer[j])
        j++;
    new_str = (char *)malloc(len + j + 1);
    if (!new_str)
        return (NULL);
    i = -1;
    while (++i < len)
        new_str[i] = stored[i];
    j = 0;
    while (buffer[j])
        new_str[i++] = buffer[j++];
    new_str[i] = '\0';
    free(stored);
    return (new_str);
}

char *get_next_line(int fd)
{
    static char *stored;
    char buffer[BUFFER_SIZE + 1];
    char *line;
    ssize_t bytes_read, i = 0;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while (!stored || !strchr(stored, '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        stored = append_buffer(stored, buffer);
    }
    if (!stored || !*stored)
        return (free(stored), stored = NULL, NULL);
    while (stored[i] && stored[i] != '\n')
        i++;
    line = (char *)malloc(i + 2);
    if (!line)
        return (NULL);
    line[i + (stored[i] == '\n')] = '\0';
    while (i-- >= 0)
        line[i:wq] = stored[i];
    stored = append_buffer(NULL, stored + i + 2);
    return (line);
}

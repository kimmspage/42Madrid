/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 12:56:00 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_store(int fd, char *stored)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*temp;
	ssize_t	bytes_read;

	while (!gnl_strchr(stored, '\n') && (bytes_read = read(fd, buffer,
				BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		temp = gnl_strjoin(stored, buffer);
		free(stored);
		stored = temp;
	}
	return (stored);
}

char	*get_next_line(int fd)
{
	static char	*stored;
	char		*line;
	char		*temp;
	size_t		i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stored = read_and_store(fd, stored);
	if (!stored || !*stored)
		return (free(stored), stored = NULL, NULL);
	while (stored[i] && stored[i] != '\n')
		i++;
	line = (char *)malloc(i + 2);
	if (!line)
		return (NULL);
	line[i + (stored[i] == '\n')] = '\0';
	while (i-- > 0)
		line[i] = stored[i];
	temp = gnl_strjoin(NULL, stored + i + 2);
	free(stored);
	stored = temp;
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 14:54:11 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_buffer(int fd, char *buffer)
{
	char	*temp;
	int		bytes_read;

	temp = (char *)malloc(1025);
	if (!temp)
		return (NULL);
	bytes_read = read(fd, temp, 1024);
	if (bytes_read <= 0)
	{
		free(temp);
		return (NULL);
	}
	temp[bytes_read] = '\0';
	buffer = ft_strjoin(buffer, temp);
	free(temp);
	return (buffer);
}

static char	*ft_get_line(char *buffer)
{
	size_t	i;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_substr(buffer, 0, i);
	if (buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	return (line);
}

static char	*ft_update_buffer(char *buffer)
{
	size_t	i;
	char	*new_buffer;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = ft_strdup(&buffer[i + 1]);
	free(buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || 1024 <= 0)
		return (NULL);
	buffer = ft_read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_update_buffer(buffer);
	return (line);
}

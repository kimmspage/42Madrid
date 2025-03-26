/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 13:44:16 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_line	*list;
	char			buffer[1024];
	ssize_t			bytes_read;
	t_line			*new_node;

	if (fd < 0)
		return (NULL);
	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	if (bytes_read <= 0)
		return (NULL);
	buffer[bytes_read] = '\0';
	new_node = ft_lstnew(ft_calloc(bytes_read + 1, sizeof(char)));
	if (!new_node)
		return (NULL);
	for (size_t i = 0; i < bytes_read; i++)
		new_node->content[i] = buffer[i];
	new_node->length = bytes_read;
	ft_lstadd_back(&list, new_node);
	return (new_node->content);
}

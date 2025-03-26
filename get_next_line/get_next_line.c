/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 13:24:25 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Lee una línea de un archivo y la devuelve
char	*get_next_line(int fd)
{
	static t_line	*list;
	char			buffer[1024];
	ssize_t			bytes_read;
	t_line			*new_node;

	list = NULL;
	if (fd < 0 || (bytes_read = read(fd, buffer, sizeof(buffer) - 1)) <= 0)
		return (NULL);
	buffer[bytes_read] = '\0'; // Asegurarse de que el buffer sea válido
	// Crear un nuevo nodo para almacenar la línea
	new_node = ft_lstnew(ft_calloc(bytes_read + 1, sizeof(char)));
	if (!new_node)
		return (NULL);
	// Copiar la cadena leída en el nodo
	for (size_t i = 0; i < bytes_read; i++)
		new_node->content[i] = buffer[i];
	new_node->length = bytes_read;
	ft_lstadd_back(&list, new_node); // Añadir el nodo a la lista
	return (new_node->content); // Devolver la línea leída
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 08:24:16 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 13:24:31 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_line
{
	char			*content;
	size_t			length;
	struct s_line	*next;
}					t_line;

// Funciones para la lista enlazada
t_line				*ft_lstnew(char *content);
t_line				*ft_lstlast(t_line *lst);
void				ft_lstadd_back(t_line **lst, t_line *new);
void				ft_lstclear(t_line **lst);
void				*ft_calloc(size_t nmemb, size_t size);

// Función principal de get_next_line
char				*get_next_line(int fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 08:24:16 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/30 01:50:14 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
int					found_newline(t_list *stash);
t_list				*ft_lstlast(t_list *stash);
void				read_and_stash(int fd, t_list **stash);
void				extract_line(t_list *stash, char **line);
void				clean_stash(t_list **stash);
int					ft_strlen(const char *str);
void				free_stash(t_list *stash);
void				ft_strlcpy(char *dst, char *src, int len);

#endif

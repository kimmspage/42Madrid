/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/30 01:50:06 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	read_and_stash(int fd, t_list **stash)
{
	char	buf[BUFFER_SIZE + 1];
	t_list	*new;
	int		readed;

	while (!found_newline(*stash))
	{
		readed = read(fd, buf, BUFFER_SIZE);
		if (readed <= 0)
			return ;
		buf[readed] = '\0';
		new = malloc(sizeof(t_list));
		new->content = malloc(readed + 1);
		ft_strlcpy(new->content, buf, readed);
		new->next = NULL;
		if (!*stash)
			*stash = new;
		else
			ft_lstlast(*stash)->next = new;
	}
}

void	extract_line(t_list *stash, char **line)
{
	int	i;
	int	j;

	j = 0;
	*line = malloc(ft_strlen(stash->content) + 1);
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				(*line)[j++] = '\n';
				break ;
			}
			(*line)[j++] = stash->content[i++];
		}
		stash = stash->next;
	}
	(*line)[j] = '\0';
}

void	clean_stash(t_list **stash)
{
	t_list	*last;
	t_list	*clean;
	int		i;
	int		j;

	last = ft_lstlast(*stash);
	i = 0;
	j = 0;
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last->content[i] == '\n')
		i++;
	clean = malloc(sizeof(t_list));
	clean->content = malloc(ft_strlen(last->content + i) + 1);
	while (last->content[i])
		clean->content[j++] = last->content[i++];
	clean->content[j] = '\0';
	clean->next = NULL;
	free_stash(*stash);
	*stash = clean;
}

char	*get_next_line(int fd)
{
	static t_list	*stash;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_and_stash(fd, &stash);
	if (!stash)
		return (NULL);
	extract_line(stash, &line);
	clean_stash(&stash);
	return (line);
}

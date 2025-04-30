/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:51:39 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/30 01:41:08 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	found_newline(t_list *stash)
{
	int		i;
	t_list	*tmp;

	tmp = stash;
	while (tmp)
	{
		i = 0;
		while (tmp->content[i])
		{
			if (tmp->content[i++] == '\n')
				return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

t_list	*ft_lstlast(t_list *stash)
{
	t_list	*tmp;

	tmp = stash;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	free_stash(t_list *stash)
{
	t_list	*current;
	t_list	*next;

	current = stash;
	while (current)
	{
		next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
}

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

void	ft_strlcpy(char *dst, char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:51:39 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/26 13:24:21 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Crea un nuevo nodo con el contenido dado
t_line	*ft_lstnew(char *content)
{
	t_line	*new_node;

	new_node = (t_line *)malloc(sizeof(t_line));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->length = 0;
	new_node->next = NULL;
	return (new_node);
}

// Devuelve el último nodo de la lista
t_line	*ft_lstlast(t_line *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// Añade un nuevo nodo al final de la lista
void	ft_lstadd_back(t_line **lst, t_line *new)
{
	t_line	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// Limpia la lista y libera toda la memoria
void	ft_lstclear(t_line **lst)
{
	t_line	*temp_lst;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temp_lst = *lst;
		*lst = (*lst)->next;
		free(temp_lst->content);
		free(temp_lst);
	} 
	*lst = NULL;
}

// Función de asignación de memoria, inicializa todo a 0
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*arr;
	size_t			alloc_size;
	size_t			i;
	unsigned char	*cast_s;

	alloc_size = nmemb * size;
	if (!alloc_size || alloc_size / nmemb != size)
		return (NULL);
	arr = malloc(alloc_size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	cast_s = arr;
	while (i < alloc_size)
	{
		cast_s[i] = '\0';
		i++;
	}
	return (cast_s);
}

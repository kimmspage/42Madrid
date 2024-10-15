/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:02 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 01:37:04 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void	*ptr;
    size_t	total_size;

    total_size = count * size;
    ptr = malloc(total_size);
    if (!ptr)
        return (NULL);
    
    ft_bzero(ptr, total_size);
    return (ptr);
}

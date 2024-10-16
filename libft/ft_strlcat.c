/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:40 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:04 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (l - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

int main(void)
{
    char dst[20] = "hey";        
    const char *src = "personita";  

    // Concatenamos src a dst
    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("conecxión: %s\n", dst);
    printf("total len: %zu\n", result);

    return 0;
}
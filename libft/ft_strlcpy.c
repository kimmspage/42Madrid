/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:43 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:10 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{
    char src[] = "holi corrector!";
    char dst[20]; 

    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("copy: %s\n", dst);
    printf("origin: %zu\n", len);

    return 0;
}












size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;
    while (src[src_len])
        src_len++;
    if (size == 0)
        return (src_len);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}
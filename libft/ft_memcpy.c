/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:46 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:12:34 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int main(void)
{
    char src[] = "holi mundo!";  // Cadena fuente
    char dst[20];                 // Cadena de destino

    // Copiamos 12 bytes de src a dst
    ft_memcpy(dst, src, 12);

    // Añadimos un carácter nulo al final de la cadena copiada
    dst[12] = '\0'; // Aseguramos que dst sea una cadena válida

    // Mostramos la cadena copiada
    printf("Cadena copiada: %s\n", dst);

    return 0;
}
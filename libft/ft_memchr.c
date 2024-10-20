/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:24 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:46:37 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "Hola, mundo!";
	char c = 'm';  // Carácter a buscar

	// Buscar la primera ocurrencia del carácter en la cadena
	char *result = ft_memchr(str, c, 10);

	// Mostrar el resultado
	printf("Resultado: %s\n", result ? result : "No encontrado");

	return (0);
}*/
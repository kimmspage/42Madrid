/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/27 17:33:44 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" /*Incluye tu ft_printf*/
#include <stdio.h>

int	main(void)
{
	/*Pruebas básicas*/
	ft_printf("Pruebita con cadena: %s\n", "Holis Mundo");
	ft_printf("Pruebita con entero: %d\n", 42);
	ft_printf("Pruebita con carácter: %c\n", 'A');
	ft_printf("Pruebita con hexadecimal: %x\n", 255);
	/*Casos límite*/
	ft_printf("Pruebita con negativo: %d\n", -42);
	ft_printf("Pruebita sin argumentos: %%\n");
	ft_printf("Pruebita nula: %s\n", NULL);
	/*Comparar con printf estándar*/
	printf("Cadenita estándar: %s\n", "Holis Mundo");
	printf("Entero estándar: %d\n", 42);
	return (0);
}

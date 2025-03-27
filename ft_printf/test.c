/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/27 18:14:15 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 

int main(void)
{
    /* Pruebas básicas */
    ft_printf("Carácter: %c\n", 'A');
    ft_printf("Cadena normal: %s\n", "Holis Mundo");
    ft_printf("Puntero válido: %p\n", &main);
    ft_printf("Entero positivo: %d\n", 42);
    ft_printf("Unsigned máximo valor: %u\n", 4294967295);
    ft_printf("Hexadecimal minúsculas: %x\n", 255);
    ft_printf("Porcentaje simple: %%\n");

    /* Casos límite */
    ft_printf("\n--- Casos límite ---\n");
    ft_printf("Carácter nulo: %c.\n", '\0');
    ft_printf("Cadena vacía: '%s'\n", "");
    ft_printf("Cadena nula: '%s'\n", NULL);
    ft_printf("Mínimo entero (INT_MIN): %d\n", -2147483648);
    ft_printf("Máximo entero (INT_MAX): %d\n", 2147483647);
    ft_printf("Hexadecimal de cero: %x.\n", 0);

    /* Mezcla de especificadores */
    ft_printf("\n--- Mezcla de especificadores ---\n");
    ft_printf(
        "Carácter: '%c', Cadena: '%s', Entero negativo: '%d', Hexadecimal mayúsculas: '%X', Porcentaje literal '%%'\n",
        'Z', "Prueba Mixta!", -12345, 3735928559);

    return (0);
}

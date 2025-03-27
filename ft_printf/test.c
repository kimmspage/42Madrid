/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/28 00:49:54 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 

int main(void)
{
    /* Pruebas básicas */
    ft_printf("Carácter: %c\n", 'A');
    ft_printf("Cadenita normal: %s\n", "Holis Corrector");
    ft_printf("Puntero válido: %p\n", &main);
    ft_printf("Entero positivo: %d\n", 42);
    ft_printf("Unsigned máximo valor: %u\n", 4294967295);
    ft_printf("Hexadecimal minúsculas: %x\n", 255);
    ft_printf("Porcentaje simple: %%\n");

    /* Casos límite */
    ft_printf("\n--- Casos límite ---\n");
    ft_printf("Carácter nulo: %c.\n", '\0');
    ft_printf("Cadenita vacía: '%s'\n", "");
    ft_printf("Cadenita nula: '%s'\n", NULL);
    ft_printf("Mínimo entero (INT_MIN): %d\n", -2147483648);
    ft_printf("Máximo entero (INT_MAX): %d\n", 2147483647);
    ft_printf("Hexadecimal de cero: %x.\n", 0);

    /* Mezclita de especificadores */
    ft_printf("\n--- Mezclita de especificadores ---\n");
    ft_printf("Carácter: '%c', Cadena: '%s', Entero negativo: '%d', Hexa Mayús: '%X', Porcentaje literal '%%'\n",
        'Z', "Prueba Mixta!", -12345, 3735928559);

    return (0);
}

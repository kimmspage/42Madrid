/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/28 17:57:04 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 
#include <stdarg.h>

void comparar_resultados(const char* descripcion, const char* formato, ...) {
    va_list args;
    int ft_len, printf_len;

    va_start(args, formato);
    ft_len = ft_printf(formato, args);
    va_end(args);

    va_start(args, formato);
    printf_len = vprintf(formato, args);
    va_end(args);

    printf("%s - ft_printf len: %d, printf len: %d\n", descripcion, ft_len, printf_len);
}

#define pruebita(formato, ...) comparar_resultados("Prueba", formato, ##__VA_ARGS__)

int main(void)
{
    /* Pruebas básicas */
    printf("\n--- Pruebas Básicas ---\n");
    pruebita("Carácter: %c\n", 'A');
    pruebita("Cadenita normal: %s\n", "Holis Corrector");
    pruebita("Puntero válido: %p\n", (void*)&main);
    pruebita("Entero positivo: %d\n", 42);
    pruebita("Unsigned máximo valor: %u\n", 4294967295U);
    pruebita("Hexadecimal minúsculas: %x\n", 255);
    pruebita("Porcentaje simple: %%\n");

    /* Casos límite */
    printf("\n--- Casos límite ---\n");
    pruebita("Carácter nulo: %c.\n", '\0');
    pruebita("Cadenita vacía: '%s'\n", "");
    pruebita("Cadenita nula: '%s'\n", NULL);
    pruebita("Mínimo entero (INT_MIN): %d\n", -2147483648);
    pruebita("Máximo entero (INT_MAX): %d\n", 2147483647);
    pruebita("Hexadecimal de cero: %x.\n", 0);

    /* Mezclita de especificadores */
    printf("\n--- Mezclita de especificadores ---\n");
    pruebita("Carácter: '%c', Cadena: '%s', Entero negativo: '%d', Hexa Mayús: '%X', Porcentaje literal '%%'\n",
        'Z', "Pruebita Mixta!", -4242, 4242);

    /* Casos adicionales */
    printf("\n--- Casos adicionales ---\n");
    pruebita("Unsigned máximo + 1: %u\n", 4294967296U);
    pruebita("Hexadecimal de número negativo: %x\n", -42);
    pruebita("Puntero NULL: %p\n", NULL);
    pruebita("Cadena larga: %s\n", "Esta es una cadena extremadamente larga para probar el manejo de cadenas extensas en la función ft_printf...");

    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/28 13:35:28 by kimberlydun      ###   ########.fr       */
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

#define PRUEBA(formato, ...) comparar_resultados("Prueba", formato, ##__VA_ARGS__)

int main(void)
{
    /* Pruebas básicas */
    PRUEBA("Carácter: %c\n", 'A');
    PRUEBA("Cadenita normal: %s\n", "Holis Corrector");
    PRUEBA("Puntero válido: %p\n", (void*)&main);
    PRUEBA("Entero positivo: %d\n", 42);
    PRUEBA("Unsigned máximo valor: %u\n", 4294967295U);
    PRUEBA("Hexadecimal minúsculas: %x\n", 255);
    PRUEBA("Porcentaje simple: %%\n");

    /* Casos límite */
    printf("\n--- Casos límite ---\n");
    PRUEBA("Carácter nulo: %c.\n", '\0');
    PRUEBA("Cadenita vacía: '%s'\n", "");
    PRUEBA("Cadenita nula: '%s'\n", NULL);
    PRUEBA("Mínimo entero (INT_MIN): %d\n", -2147483648);
    PRUEBA("Máximo entero (INT_MAX): %d\n", 2147483647);
    PRUEBA("Hexadecimal de cero: %x.\n", 0);

    /* Mezclita de especificadores */
    printf("\n--- Mezclita de especificadores ---\n");
    PRUEBA("Carácter: '%c', Cadena: '%s', Entero negativo: '%d', Hexa Mayús: '%X', Porcentaje literal '%%'\n",
        'Z', "Pruebita Mixta!", -4242, 4242);

    /* Casos adicionales */
    printf("\n--- Casos adicionales ---\n");
    PRUEBA("Unsigned máximo + 1: %u\n", 4294967296U);
    PRUEBA("Hexadecimal de número negativo: %x\n", -42);
    PRUEBA("Puntero NULL: %p\n", NULL);
    PRUEBA("Cadena larga: %s\n", "Esta es una cadena extremadamente larga para probar el manejo de cadenas extensas en la función ft_printf...");

    return (0);
}

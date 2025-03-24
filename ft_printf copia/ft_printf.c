/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/19 00:10:32 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Manejo de los especificadores de formato */
int ft_process_format(va_list args, char format)
{
    if (format == 'c')
        return (ft_putchar(va_arg(args, int)));
    if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
    if (format == 'p')
        return (ft_putptr(va_arg(args, void *)));
    if (format == 'd' || format == 'i')
        return (ft_putnbr(va_arg(args, int)));
    if (format == 'u')
        return (ft_putunbr(va_arg(args, unsigned int)));
    if (format == 'x' || format == 'X')
        return (ft_puthex(va_arg(args, unsigned int), format));
    if (format == '%')
        return (ft_putchar('%'));
    return (0);
}

/* Implementación de ft_printf */
int ft_printf(const char *format, ...)
{
    va_list args;
    int len = 0;
    
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            len += ft_process_format(args, *format);
        }
        else
            len += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (len);
}

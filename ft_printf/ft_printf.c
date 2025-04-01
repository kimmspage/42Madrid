/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/02 01:33:16 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>

/* Manejo de especificadores hexadecimales */
static int	handle_hex(va_list args, char format, size_t *count)
{
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (ft_puthex(va_arg(args, unsigned int), count, base));
}

/* Manejo de todos los especificadores */
int	ft_process_format(va_list args, char format, size_t *count)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int), count));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *), count));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int), count));
	if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int), count));
	if (format == 'p')
		return (ft_putptr(va_arg(args, void *), count));
	if (format == 'x' || format == 'X')
		return (handle_hex(args, format, count));
	if (format == '%')
		return (ft_putchar('%', count));
	return (0);
}

/* Implementación de ft_printf */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
				ft_process_format(args, *format, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return ((int)count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/28 00:48:13 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Manejo especificadores (Corrected Javi and Eddy) */
int	ft_process_format(va_list args, char format)
{
	int				len;
	unsigned long	addr;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format == 'p')
	{
		len = 0;
		addr = (unsigned long)va_arg(args, void *);
		len += ft_putstr("0x");
		len += len + ft_puthex(addr, 'x');
		return (len);
	}
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

/* Implementación de ft_printf */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
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

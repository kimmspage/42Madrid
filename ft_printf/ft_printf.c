/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:14 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/31 10:27:10 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Manejo especificadores (Corrected Javi and Eddy) */
int	ft_process_format(va_list args, char format, size_t *count)
{
	int				len;
	unsigned long	addr;

	len = 0;
	if (format == 'c')
		return (ft_putchar(va_arg(args, int), count));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *), count));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int), count));
	else if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int), count));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), count,
				(format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF"));
	else if (format == 'p')
	{
		addr = (unsigned long)va_arg(args, void *);
		len += ft_putstr("0x", count);
		len += ft_puthex(addr, count, "0123456789abcdef");
		return (len);
	}
	else if (format == '%')
		return (ft_putchar('%', count));
	return (0);
}

/* Implementación de ft_printf */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	size_t	count;

	len = 0;
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_process_format(args, *format, &count);
		}
		else
			len += ft_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (len);
}

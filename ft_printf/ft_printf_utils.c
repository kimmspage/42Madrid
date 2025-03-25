/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/25 20:49:25 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Auxiliar de Carácter*/
int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

/* Auxiliar cadena */
int ft_putstr(char *s)
{
    int len = 0;
    
    if (!s)
        s = "(null)";
    while (*s)
        len += ft_putchar(*s++);
    return (len);
}

/* Auxiliar número en base 10 */
int ft_putnbr(int n)
{
    int len = 0;
    char c;
    
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        len += ft_putnbr(n / 10);
    c = (n % 10) + '0';
    len += ft_putchar(c);
    return (len);
}

/* Auxiliar para número sin signo en base 10 */
int ft_putunbr(unsigned int n)
{
    int len = 0;
    char c;
    
    if (n > 9)
        len += ft_putunbr(n / 10);
    c = (n % 10) + '0';
    len += ft_putchar(c);
    return (len);
}

/* Auxiliar en base hexadecimal */
int ft_puthex(unsigned long n, char format)
{
    int len = 0;
    char *hex = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    
    if (n > 15)
        len += ft_puthex(n / 16, format);
    len += ft_putchar(hex[n % 16]);
    return (len);
}

/* Auxiliar punteros en hexadecimal */
int ft_putptr(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    int len = 0;
    
    len += ft_putstr("0x");
    len += ft_puthex(addr, 'x');
    return (len);
}

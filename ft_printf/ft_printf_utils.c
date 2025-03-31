/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/03/31 11:11:23 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Auxiliar de Carácter*/
int	ft_putchar(char c, size_t *count)
{
	return (write(1, &c, 1));
	(*count)++;
}

/* Auxiliar cadena */
int	ft_putstr(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, count);
		str++;
	}
}

/* Auxiliar número en base 10 */
int ft_putnbr(int n, size_t *count)
{
    if (n == -2147483648)
    {
        ft_putstr("-2147483648", count);
        return (11); /*Length of "-2147483648"*/
    }
    if (n < 0)
    {
        ft_putchar('-', count);
        n = -n;
        return (1 + ft_putnbr(n, count));
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10, count);
        ft_putchar('0' + n % 10, count);
        return (1 + ft_putnbr(n / 10, count));
    }
    return (ft_putchar('0' + n, count));
}

/* Auxiliar para número sin signo en base 10 */
int	ft_putunbr(unsigned int n, size_t *count)
{
	if (n >= 10)
		ft_putunbr(n / 10, count);
	ft_putchar(n % 10 + '0', count);
}

/* Auxiliar en base hexadecimal */
int	ft_puthex(unsigned int n, size_t *count, char *base)
{
	if (n >=16)
	ft_puthex(n / 16, count, base);
	ft_putchar(base[n % 16], count);
}

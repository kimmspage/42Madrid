/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/29 00:33:51 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Auxiliar número de base 10*/
int	ft_putnbr(int n, size_t *count)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648", count));
	if (n < 0)
	{
		if (ft_putchar('-', count) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
		if (ft_putnbr(n / 10, count) == -1)
			return (-1);
	return (ft_putchar((n % 10) + '0', count));
}

/* Auxiliar número sin signo en base 10 */
int	ft_putunbr(unsigned int n, size_t *count)
{
	if (n >= 10)
		if (ft_putunbr(n / 10, count) == -1)
			return (-1);
	return (ft_putchar((n % 10) + '0', count));
}

/* Auxiliar en base hexadecimal */
int	ft_puthex(unsigned int n, size_t *count, char *base)
{
	if (n >= 16)
		if (ft_puthex(n / 16, count, base) == -1)
			return (-1);
	return (ft_putchar(base[n % 16], count));
}

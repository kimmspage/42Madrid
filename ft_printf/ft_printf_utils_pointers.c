/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_pointers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/29 01:03:12 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Auxiliar en base hexadecimal con formato long long */
int	ft_puthex_ptr(unsigned long long n, size_t *count)
{
	if (n >= 16)
	{
		ft_puthex_ptr(n / 16, count);
		ft_puthex_ptr(n % 16, count);
	}
	else
	{
		if (n < 10)
		{
			if (ft_putchar(n + '0', count) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(n - 10 + 'a', count) == -1)
				return (-1);
		}
	}
	return (0);
}

/* Auxiliar para imprimir punteros */
int	ft_putptr(unsigned long long ptr, size_t *count)
{
	if (!ptr)
		return (ft_putstr("(nil)", count));
	if (ft_putstr("0x", count) == -1)
		return (-1);
	if (ft_puthex_ptr(ptr, count) == -1)
		return (-1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_pointers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/03 12:05:27 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Auxiliar para imprimir punteros */
int	ft_putptr(void *ptr, size_t *count)
{
	unsigned long address;

	if (!ptr)
		return (ft_putstr("(nil)", count));
	address = (unsigned long)ptr;
	if (ft_putstr("0x", count) == -1)
		return (-1);
	return (ft_puthex(address, count, "0123456789abcdef"));
}
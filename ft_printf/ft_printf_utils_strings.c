/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_strings.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:36:12 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/29 00:54:28 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Auxiliar de Carácter*/
int	ft_putchar(char c, size_t *count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	(*count)++;
	return (1);
}

/*Auxiliar de Cadenita*/
int	ft_putstr(char *str, size_t *count)
{
	if (!str)
		return (ft_putstr("(null)", count));
	while (*str)
	{
		if (ft_putchar(*str++, count) == -1)
			return (-1);
	}
	return (0);
}

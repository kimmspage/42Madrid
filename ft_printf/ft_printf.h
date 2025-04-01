/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:14:11 by kimberlydun       #+#    #+#             */
/*   Updated: 2025/04/01 23:20:16 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c, size_t *count);
int ft_putstr(char *str, size_t *count);
int	ft_putnbr(int n, size_t *count);
int	ft_putunbr(unsigned int n, size_t *count);
int	ft_puthex(unsigned int n, size_t *count, char *base);
int	ft_process_format(va_list args, char format, size_t *count);
int	ft_printf(const char *format, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:16 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:45:59 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	int	c;

	c = 65;
	if (ft_isascii(c))
	{
		printf("true\n", c);
	}
	else
	{
		printf("false\n", c);
	}
	return (0);
}
*/
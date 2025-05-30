/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdungaya <kdungaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:19 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/19 23:46:20 by kdungaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)

{
	return (c >= 48 && c <= 57);
}

/*
int	main(void)
{
	int	c;

	c = '9';
	if (ft_isdigit(c)) {
		printf("True");
	} else {
		printf("False");
	}
}
*/
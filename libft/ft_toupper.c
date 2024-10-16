/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:54:00 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 14:38:26 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main(void)
{
   
    printf("'%c' MAS '%c'\n", 'b', ft_toupper('b'));

    return 0;
}

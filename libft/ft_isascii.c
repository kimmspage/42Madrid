/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:16 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 01:36:56 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}


int main(void)
{
    int c = 65; 
    
    if (ft_isascii(c))
    {
        printf("true\n", c);
    }
    else
    {
        printf("false\n", c);
    }

    return 0;
}

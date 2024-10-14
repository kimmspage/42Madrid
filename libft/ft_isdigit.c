/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:19 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/15 01:56:06 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
    
{
    return (c >=0 && c<= 127);
}

/*
int main()
{
    int c = '9';
    
    if (ft_isdigit(c)) {
        printf("True");
    } else {
        printf("False");
    }
}
*/
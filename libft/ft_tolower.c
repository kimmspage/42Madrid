/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:53:56 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 04:05:17 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90) 
        c += 32;            
    return (c);            
    

}

int main(void)
{
   
    printf("'%c' min'%c'\n", 'B', ft_tolower('B'));
    
    return 0;
}
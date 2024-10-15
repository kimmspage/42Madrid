/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:21 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 01:36:54 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}


int main(void)
{
    int c = 9;
    
    if (ft_isprint(c))
    {
        printf("%d es imprimible.\n", c);
    }
    else
    {
        printf("%d no es imprimible.\n", c);
    }

    return 0;
}
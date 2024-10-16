/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimberlydungaya <kimberlydungaya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:10 by kimberlydun       #+#    #+#             */
/*   Updated: 2024/10/16 14:31:19 by kimberlydun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}


int main()
{
    int c = 'a';
    
    if (ft_isalpha(c)) {
        printf("true");
}   else {
        printf("false");
}


return 0;
}

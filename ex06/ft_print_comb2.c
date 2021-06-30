/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:40:42 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 17:00:30 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2()
{
    int a1 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 1;
    
    while(a1 < 10 && a2 <10 && b1 < 10 && b2 < 10)
    {
        ft_putchar(a1+48);
        ft_putchar(a2+48);
        ft_putchar(' ');
        ft_putchar(b1+48);
        ft_putchar(b2+48);
        ft_putchar(' ');
    
        b2++;
        if(b2 > 9)
        {
            b1++;
            b2 = b1 +1;
        }
    }
    
}



int main()
{
    ft_print_comb2();
    return 0;
}
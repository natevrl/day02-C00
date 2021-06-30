/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:33:39 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 16:15:58 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;
    
    
    while(a <= 7 && b <= 8 && c <= 9)
    {
        ft_putchar(a+48);
        ft_putchar(b+48);
        ft_putchar(c+48);
        ft_putchar(',');
        ft_putchar(' ');
        ++c;
    
        if(c > 9)
        {
            b++;
            c = b + 1;
        }
        if(b > 8)
        {
            a++;
            b = a + 1;
            c = b + 1;
        }
        
    }
    
}


int main()
{
    ft_print_comb();
    return 0;
}

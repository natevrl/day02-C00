/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ttttttttteeeesttttttt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:56:48 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 20:46:26 by nbenhado         ###   ########.fr       */
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
    int a = 00;
    int b = 01;
    
	while(a < 99)
    {
        ft_putchar(a / 10 +48);
        ft_putchar(a % 10 +48);
        ft_putchar(' ');
        ft_putchar(b / 10 +48);
        ft_putchar(b % 10 +48);
        ft_putchar(',');
    
        b++;
        
			if(b > 99)
        {
            a++;
            b = a + 1;
        }
        
    }
    
}



int main()
{
    ft_print_comb2();
    return 0;
}
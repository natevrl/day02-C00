/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:56:23 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 23:15:32 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int i;
	i = nb;

	if(i > 9){
		ft_putnbr(i / 10);
		ft_putchar(i % 2+48);
	}
	else
	{
		ft_putchar(i+48);
	}
	
}



int main(void)
{
	ft_putnbr(556);
	return (0);
}

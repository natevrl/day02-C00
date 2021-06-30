/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:33:39 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/30 12:50:28 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putints(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char	combi[3] = {'0', '1', '2'};
	while(combi[0] < 56 && combi[1] < 57 && combi[2] < 58)
	{
		ft_putints(combi[0], combi[1], combi[2]);
		write(1, ", ", 2);
		++combi[2];
	}

}

int main()
{
	ft_print_comb();
	return 0;
}

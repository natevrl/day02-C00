/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:19:01 by nbenhado          #+#    #+#             */
/*   Updated: 2021/06/29 23:35:38 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alph;

	alph = 96;
	while (++alph <= 'z')
		write(1, &alph, 1);
	return ;
}

int main()
{
	ft_print_alphabet();
	return 0;
}

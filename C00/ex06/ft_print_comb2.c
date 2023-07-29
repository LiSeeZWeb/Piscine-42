/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:48:27 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/08 22:53:25 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar((n1 / 10) + '0');
			ft_putchar((n1 % 10) + '0');
			write(1, " ", 1);
			ft_putchar((n2 / 10) + '0');
			ft_putchar((n2 % 10) + '0');
			if (n1 != 98)
			{
				write(1, ",  ", 2);
			}
			n2++;
		}
		n1++;
	}
}

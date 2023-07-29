/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:49:54 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/09 01:21:38 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	array[10];
	int	contador;

	contador = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	contador = 0;
	while (nb > 0)
	{	
		array[contador] = nb % 10;
		contador++;
		nb = nb / 10;
	}
	while (--contador != -1)
		ft_putchar(array[contador] + '0');
}

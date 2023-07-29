/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfan <xfan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:26:07 by csoler-g          #+#    #+#             */
/*   Updated: 2023/07/09 18:39:19 by xfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_linea(char primer, char ultimo, char medio, int longitud)
{
	int	i;

	i = 1;
	while (i <= longitud)
	{
		if (i == 1)
			ft_putchar(primer);
		else if (i == longitud)
			ft_putchar(ultimo);
		else
			ft_putchar(medio);
		i++;
	}
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;
	int		i;

	a = 'A';
	b = 'B';
	c = 'C';
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			imprimir_linea(a, c, b, x);
		else if (i == y)
			imprimir_linea(c, a, b, x);
		else
			imprimir_linea(b, b, ' ', x);
		write(1, "\n", 1);
		i++;
	}
}

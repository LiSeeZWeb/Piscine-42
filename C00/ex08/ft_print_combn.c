/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 03:06:45 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 22:46:32 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char *array, int size, int last)
{
	int	i;

	i = 0;
	if (array[0] == last)
	{
		while (i < size)
			ft_putchar(array[i++]);
		return ;
	}
	while (i < size)
		ft_putchar(array[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	array[10];
	char	array_max[10];
	int		flag;
	int		base;
	int		i;

	i = -1;
	while (++i < n)
	{
		array[i] = i + 48;
		array_max[i] = (10 - n) + i + 48;
	}
	print_array(array, n, array_max[0]);
	while (array[0] != array_max[0])
	{
		flag = n - 1;
		while (array[flag] == array_max[flag])
			--flag;
		base = ++(array[flag]);
		while (flag < n - 1)
			array[++flag] = ++base;
		print_array(array, n, array_max[0]);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:17:36 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/11 13:10:41 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = aux;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 03:47:36 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/16 10:53:59 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 1)
			ft_write(str[i]);
		else
		{
			ft_write('\\');
			ft_write("0123456789abcdef"[(unsigned char)str[i] / 16]);
			ft_write("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}

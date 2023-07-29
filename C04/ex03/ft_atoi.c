/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:46:21 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 19:00:19 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	short	count;
	int		number;

	count = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (! (count % 2))
		return (number);
	return (-number);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:55:06 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/26 20:55:51 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int number;
	int sign = 1;
	count = 0;
	while((str[i] >= 9 && str[i] <= 13 )|| str[i] == '32')
		i++
	while(str[i] == '-')
	{
		sign = - 1;
		count++;
	}
	if (count == 1)
	{
		while(str[i] == '-' || str[i] == '+')
			i++
		while(str[i] >= '0' && str[i] <= '9')
		{
			number *= 10 + *str - '0';
		}
		return (number * sign);
	}
	else
		return (0);
}


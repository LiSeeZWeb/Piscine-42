/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:23:57 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/13 14:40:14 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	while (str[i] != '\0' && boolean == 1)
	{
		if (str[i] < 48 || str[i] > 57)
			boolean = 0;
		i++;
	}
	return (boolean);
}

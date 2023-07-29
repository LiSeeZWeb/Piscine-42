/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:29:44 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/25 19:19:17 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int *) * (max - min));
	if (max <= min || array == NULL)
	{
		array = NULL;
		return (array);
	}
	while (min < max)
		array[i++] = min++;
	return (array);
}

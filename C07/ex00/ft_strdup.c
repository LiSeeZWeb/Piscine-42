/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:52:16 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 16:46:42 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	str = (char *) malloc (size * sizeof(char));
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:56:28 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/26 20:56:48 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int i = 0;
	while(src[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int i = 0;
	int size = ft_strlen(src);
	char *str;
	str = malloc (sizeof(char) * (size));

	while (src[i] != '\0')
	{
		str[i] = src[i]
		i++;
	}
	str[i] = '\0';
	return (str);
}

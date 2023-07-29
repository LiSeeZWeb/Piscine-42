/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:42:32 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/25 15:36:14 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		a;
	int		b;
	int		count;

	i = 0;
	a = 0;
	b = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[i++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[i++] = sep[b++];
		b = 0;
	}
	tab[i] = '\0';
	return (tab);
}

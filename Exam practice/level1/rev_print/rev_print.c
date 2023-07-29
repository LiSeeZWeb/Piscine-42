/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:40:52 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 23:05:55 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char *letter = argv[1];
	int i = ft_strlen(letter);
	if (argc == 2)
	{
		while(i >= 0)
		{
			write(1, &letter[i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}

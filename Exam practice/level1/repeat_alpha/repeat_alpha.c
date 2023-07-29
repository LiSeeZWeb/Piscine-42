[
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:28:37 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 02:35:37 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_number(char c)
{
	int i = 0;
	if (c >= 'a' && c <= 'z')
	   i = (c - 'a') + 1;
	else
		i = 1;
	return (i);
}

void	ft_repeat(char *str)
{
	int	i;
	int reps;

	i = -1;
	while(str[++i] != '\0')
	{
		reps = ft_number(str[i]);
		while(reps-- > 0)
			write(1, &str[i], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat(argv[1]);
	}
	write(1, "\n", 1);
}	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:24:38 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 12:15:57 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_case(char *str)
{
	int i;

	i = -1;
	while(str[++i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_case(argv[1]);
	write(1, "\n", 1);
}

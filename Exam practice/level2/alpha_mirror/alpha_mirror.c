/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:27:11 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/26 23:49:25 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int	i;
		i = 0;
		char c;
		while(argv[1][i] != '\0')
		{
			c = argv[1][i];
			if(argv[1][i] >= 97 && argv[1][i] < 122)
			{
				int aux = (c - 'a'); 
				c = 'z' - aux;
				write(1, &c, 1);
			}
			else if (argv[1][i] == 'z')
				write(1, "a", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

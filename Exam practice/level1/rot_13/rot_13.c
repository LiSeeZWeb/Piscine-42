/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:01:46 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/23 23:03:38 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc == 2)
	{
		while(argv[1][++i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if(argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			else if(argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
		}
	}
	 write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:18:44 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/21 23:33:13 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	if ( argc >= 2)
	while (argv[j][i] != '\0')
	{
		write(1, &argv[j][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

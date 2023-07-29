/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:13:39 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/26 19:53:29 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		char *str1 = argv[1];
		char *str2 = argv[2];
		char *str3 = argv[3];

		while(str1[i] != '\0')
		{
			if(str1[i] == str2[0])
			{
				str1[i] = str3[0];
			}
			write(1, &str1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

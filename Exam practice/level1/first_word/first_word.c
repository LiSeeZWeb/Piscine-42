/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:13:05 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/26 14:21:12 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char c)
{
	write(1, &c, 1);
}

int	skip_space(char c)
{
	if ((c >= 9  && c <= 13) || c == 32)
		return (1);
	return (0);
}

void	first_word(char *str)
{
	int	i;
	int inword;

	i = 0;
	inword = 0;
	while(str[i] != '\0' && inword == 0)
		if(skip_space(str[i]) == 1)
			i++;
		else  
			inword = 1;
	while((str[i] != '\0') && (!(str[i] < 33)))
		putstr(str[i++]);

}

int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}

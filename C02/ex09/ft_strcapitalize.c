/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:08:19 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/14 12:42:38 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (boolean == 1)
			{
				str[i] -= 32;
			}
			boolean = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			boolean = 0;
		else
			boolean = 1;
		i++;
	}
	return (str);
}

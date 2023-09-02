/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:33:33 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/16 21:33:40 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		printchar('0');
		printchar(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		printchar(tens + '0');
		printchar(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			printchar(' ');
			int_to_char(j);
			if (i < 98)
			{
				printchar(',');
				printchar(' ');
			}
			j++;
		}
		i++;
	}
}

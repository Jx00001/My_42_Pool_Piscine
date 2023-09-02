/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:01:02 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/16 21:47:10 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	combine(char a, char b, char c)
{
	printchar(a + '0');
	printchar(b + '0');
	printchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	printchar(',');
	printchar(' ');
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				combine(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

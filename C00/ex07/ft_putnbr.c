/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:39:21 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/16 21:31:51 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	len(int x)
{
	int	lenght;

	lenght = 0;
	while (x > 1)
	{
		x /= 10;
		lenght++;
	}
	return (lenght);
}

void	ptchar(char c)
{
	write(1, &c, 1);
}

int	power(int base, int p)
{
	int	pindex;
	int	value;

	pindex = 1;
	value = 1;
	while (pindex <= p)
	{
		value = value * base;
		pindex++;
	}
	return (value);
}

int	digit(int x, int n)
{
	int	h;

	h = ((int) x / power(10, n - 1) % 10);
	return (h);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	dg;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ptchar(8 + '0');
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * -1);
	}
	if (nb == 0)
	{
		ptchar(0 + '0');
		return ;
	}
	i = len(nb);
	while (i > 0)
	{
		dg = digit(nb, i--);
		ptchar(dg + 48);
	}
}

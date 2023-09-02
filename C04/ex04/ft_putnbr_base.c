/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:51:25 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/30 21:51:33 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	len(char	*str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

int	errb(char *v)
{
	int	i;
	int	j;

	i = 0;
	if (len(v) <= 1)
		return (1);
	while (v[i] != '\0')
	{
		j = i + 1;
		while (v[j] != '\0')
		{
			if (v[i] == v[j])
				return (1);
			j++;
		}
		if (v[i] == '+' || v[i] == '-' || (v[i] < 32 || v[i] > 126))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (errb(base) == 1)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n / len(base) == 0)
	{
		write(1, &base[n % len(base)], 1);
	}
	else
	{
		ft_putnbr_base(n / len(base), base);
		write(1, &base[n % len(base)], 1);
	}
}

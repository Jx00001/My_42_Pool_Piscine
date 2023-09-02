/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 23:59:18 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/23 23:59:20 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np >= 16)
	{
		ft_print_hexa(np / 16);
		ft_print_hexa(np % 16);
	}
	else
	{
		ft_putchar(hex[np]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	val;

	while (*str != '\0')
	{
		val = (int)*str;
		if ((val < 32 && val > 0) || val == 127)
		{
			ft_putchar('\\');
			if (val < 16)
			{
				ft_putchar('0');
			}
			ft_print_hexa(val);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

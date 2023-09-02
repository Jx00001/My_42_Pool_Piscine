/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:03:45 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/28 21:03:47 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pindex;
	int	value;

	pindex = 1;
	value = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (pindex <= power)
	{
		value = value * nb;
		pindex++;
	}
	return (value);
}

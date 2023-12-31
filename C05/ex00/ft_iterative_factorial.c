/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:03:24 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/28 21:03:25 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	itr;

	itr = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		itr *= nb;
		nb--;
	}
	return (itr);
}

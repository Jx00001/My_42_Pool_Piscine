/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:04:13 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/28 21:04:15 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vabslt(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

int	ft_sqrt(int nb)
{
	int	guess;
	int	best_guess;

	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	best_guess = nb / 2;
	while (1 == 1)
	{
		guess = (best_guess + nb / best_guess) / 2;
		if (vabslt(guess - best_guess) <= 1)
		{
			if ((guess * guess) == nb)
				return (guess);
			else
				return (0);
		}
		best_guess = guess;
	}
}

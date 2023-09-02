/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:04:26 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/28 21:04:27 by yelkharo         ###   ########.fr       */
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
	int	best_guess;
	int	guess;

	if (nb == 0)
		return (0);
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
			return (guess);
		}
		best_guess = guess;
	}
}

int	ft_is_prime(int nb)
{
	int	sqrt_nb;
	int	start;

	sqrt_nb = ft_sqrt(nb);
	start = 2;
	if (nb == 1)
		return (0);
	if (nb <= 0)
		return (0);
	while (start <= sqrt_nb)
	{
		if (nb % start == 0)
		{
			return (0);
		}
		start++;
	}
	return (1);
}

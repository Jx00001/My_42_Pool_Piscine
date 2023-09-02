/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:55:13 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:55:16 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	ascii_value;

	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (!(ascii_value >= 48 && ascii_value <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

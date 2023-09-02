/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:57:21 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:57:22 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	ascii_value;

	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (!(ascii_value >= 65 && ascii_value <= 90))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

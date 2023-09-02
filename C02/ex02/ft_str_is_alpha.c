/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:54:02 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:54:06 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	ascii_value;

	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (!(ascii_value >= 65 && ascii_value <= 90) && !(ascii_value >= 97
				&& ascii_value <= 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

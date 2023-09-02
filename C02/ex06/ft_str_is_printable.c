/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:56:05 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:56:08 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	ascii_value;

	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if ((ascii_value < 32))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

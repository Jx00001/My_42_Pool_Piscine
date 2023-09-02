/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:59:55 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:59:57 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original;
	int		ascii_value;

	original = str;
	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (ascii_value >= 65 && ascii_value <= 90)
		{
			*str = (char)(ascii_value + 32);
		}
		str++;
	}
	return (original);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:59:03 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 17:59:04 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original;
	int		ascii_value;

	original = str;
	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (ascii_value >= 97 && ascii_value <= 122)
		{
			*str = (char)(ascii_value - 32);
		}
		str++;
	}
	return (original);
}

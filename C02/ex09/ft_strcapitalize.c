/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:00:44 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/19 18:00:46 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int	ascii_value;

	ascii_value = (int)*str;
	if (!(ascii_value >= 48 && ascii_value <= 57))
	{
		return (0);
	}
	str++;
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	ascii_value;

	ascii_value = (int)*str;
	if (!(ascii_value >= 65 && ascii_value <= 90) && !(ascii_value >= 97
			&& ascii_value <= 122))
	{
		return (0);
	}
	str++;
	return (1);
}

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

char	*ft_strcapitalize(char *str)
{
	char	*original;
	bool	is_alphanum;
	int		ascii_value;

	original = str;
	is_alphanum = true;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		ascii_value = (int)*str;
		if (!(ascii_value >= 97 && ascii_value <= 122) && is_alphanum == true)
			is_alphanum = false;
		if (!(ft_str_is_alpha(str)) && !(ft_str_is_numeric(str)))
			is_alphanum = true;
		if (ascii_value >= 97 && ascii_value <= 122 && is_alphanum == true)
		{
			ascii_value -= 32;
			is_alphanum = false;
		}
		*str = (char)(ascii_value);
		str++;
	}
	return (original);
}

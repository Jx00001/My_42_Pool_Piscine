/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:59:34 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/18 10:06:51 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	char	*destptr;

	destptr = dest;
	while (*src != '\0')
	{
		*destptr = *src;
		destptr++;
		src++;
	}
	*destptr = '\0';
	return (dest);
}

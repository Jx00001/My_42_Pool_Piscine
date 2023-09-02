/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:49:16 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/27 15:49:30 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	len(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	slen = len(src);
	dlen = len(dest);
	if (size <= dlen)
		return (size + slen);
	while (*dest != '\0')
		dest++;
	i = dlen;
	while (*src != '\0' && i < (size - 1))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (slen + dlen);
}

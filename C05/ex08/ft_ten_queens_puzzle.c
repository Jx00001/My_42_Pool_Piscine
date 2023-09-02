/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelkharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:30:44 by yelkharo          #+#    #+#             */
/*   Updated: 2023/08/31 19:30:46 by yelkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_cases(int board[10][10], int *ptr)
{
	int		i;
	int		j;
	char	place;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				place = (char)(48 + j);
				write(1, &place, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	*ptr += 1;
}

int	ft_abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

int	ft_is_check(int board[10][10], int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (ft_abs(i - x) == ft_abs(j - y) && board[i][j] != 0 && (i != x
					&& j != y))
				return (1);
			j++;
		}
		if (board[x][i] != 0 && i != y)
			return (1);
		if (board[i][y] != 0 && i != x)
			return (1);
		i++;
	}
	return (0);
}

void	ft_z_y(int board[10][10], int y, int *ptr)
{
	int	x;

	if (y == 10)
	{
		ft_print_cases(board, ptr);
	}
	else
	{
		x = 0;
		while (x < 10)
		{
			if (!ft_is_check(board, y, x))
			{
				board[y][x] = 1;
				ft_z_y(board, y + 1, ptr);
				board[y][x] = 0;
			}
			x++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	count;
	int	*ptr;
	int	i;
	int	j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	count = 0;
	ptr = &count;
	ft_z_y(board, 0, ptr);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:35:41 by lupelleg          #+#    #+#             */
/*   Updated: 2025/01/26 11:30:49 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_down(int input, int j, int grid[4][4])
{
	int	i;
	int	highest;
	int	visible;

	i = 0;
	highest = 0;
	visible = 0;
	while (i <= 3)
	{
		if (grid[i][j] > highest)
		{
			highest = grid[i][j];
			visible++;
		}
		i++;
	}
	return (input == visible);
}

int	check_up(int input, int j, int grid[4][4])
{
	int	i;
	int	highest;
	int	visible;

	i = 3;
	highest = 0;
	visible = 0;
	while (i >= 0)
	{
		if (grid[i][j] > highest)
		{
			highest = grid[i][j];
			visible++;
		}
		i--;
	}
	return (input == visible);
}

int	check_right(int input, int j, int grid[4][4])
{
	int	i;
	int	highest;
	int	visible;

	i = 0;
	highest = 0;
	visible = 0;
	while (i <= 3)
	{
		if (grid[j][i] > highest)
		{
			highest = grid[j][i];
			visible++;
		}
		i++;
	}
	return (input == visible);
}

int	check_left(int input, int j, int grid[4][4])
{
	int	i;
	int	highest;
	int	visible;

	i = 3;
	highest = 0;
	visible = 0;
	while (i >= 0)
	{
		if (grid[j][i] > highest)
		{
			highest = grid[j][i];
			visible++;
		}
		i--;
	}
	return (input == visible);
}

int	check(int input[], int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_down(input[i], i, grid))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!check_up(input[i + 4], i, grid))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!check_right(input[i + 8], i, grid))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!check_left(input[i + 12], i, grid))
			return (0);
		i++;
	}
	return (1);
}

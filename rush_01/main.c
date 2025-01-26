/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:16:02 by lupelleg          #+#    #+#             */
/*   Updated: 2025/01/26 11:27:21 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(int result[4][4]);

int	ft_stoia (char *str, int *input_int)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			input_int[count] = (*str - '0');
			count++;
		}
		else if (*str == ' ')
			;
	str++;
	}
	return(count);
}

int	generate_matrices(int grid[4][4], int row, int col, int input[]);

int main(int argc, char *argv[])
{
	int input_int[16];
	int size;
	int result [4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}};


	if (argc == 2)
		{
			size = ft_stoia(argv[1], input_int);
			if (size != 16)
			{
				write (1, "Please provide exacly one argument with 16 numbers.\n", 52);
				return (0);
			}
			if (generate_matrices(result, 0, 0, input_int))
				return (0);
			else
				write (1, "No solution found.\n", 19);
		}
	else
		write (1, "Please provide exacly one argument with 16 numbers.\n", 52);
	return(0);
}

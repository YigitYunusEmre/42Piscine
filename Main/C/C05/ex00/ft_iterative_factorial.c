/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:08:01 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 11:47:09 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int input = 5;
// 	int output;

// 	output = ft_iterative_factorial(input);
// 	printf("%d", output);

// }

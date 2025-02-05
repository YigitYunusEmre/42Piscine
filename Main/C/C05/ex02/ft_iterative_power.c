/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:26:12 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 12:31:51 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0 || (nb == 0 && power == 0))
	{
		return (1);
	}
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	while (power != i)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int input = -2938;
// 	int power = 1;
// 	int output;

// 	output = ft_iterative_power(input, power);
// 	printf("%d", output);

// }

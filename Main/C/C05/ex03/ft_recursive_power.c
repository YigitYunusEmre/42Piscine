/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:42:43 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/30 12:28:39 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>

// int main (void)
// {
// 	int input = 0;
// 	int power = 2;
// 	int output;

// 	output = ft_recursive_power(input, power);
// 	printf("%d", output);

// }

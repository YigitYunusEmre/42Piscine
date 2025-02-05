/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:16:58 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 11:48:36 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial (nb - 1));
	}
}

// #include <stdio.h>

// int main (void)
// {
// 	int input = 5;
// 	int output;

// 	output = ft_recursive_factorial(input);
// 	printf("%d", output);

// }

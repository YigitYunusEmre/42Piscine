/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:08:12 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 12:26:23 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
	{
		return (0);
	}
	while (nb >= i)
	{
		if (nb == i)
		{
			return (1);
		}
		else if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main (void)
// {
// 	int input = 7;
// 	int output;

// 		output = ft_is_prime(input);
// 		printf("%d", output);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:27:48 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 18:47:55 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*count;
	int	result;

	i = 0;
	result = 0;
	result = (max - min);
	count = (int *)malloc(4 * (result));
	if (min > max || min == max)
	{
		return (0);
	}
	while (i < (max - min))
	{
		count[i] = i + min;
		i++;
	}
	return (count);
}

// #include <stdio.h>

// int main (void)
// {
// 	int min = -30;
// 	int long max = 45;

// 	int counter = 0;
// 	int i = 0;
// 	int *input = ft_range(min, max);
// 	while (i <= max - min)
// 	{
// 		printf("%d ", input[i]);
// 		if (counter == 10)
// 		{
// 			printf("\n");
// 			counter = 0;
// 		}
// 		i++;
// 		counter++;
// 	}
// 	printf("\n");
// 	return (0);
// }

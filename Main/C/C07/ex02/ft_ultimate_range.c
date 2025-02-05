/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:28:02 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 18:47:57 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*count;
	int	result;

	i = 0;
	result = 0;
	result = (max - min);
	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	else
		count = (int *)malloc(4 * (result));
	while (i < (max - min))
	{
		count[i] = i + min;
		i++;
	}
	*range = count;
	return (i);
}

// #include <stdio.h>

// int main (void)
// {
// 	int min = -30;
// 	int max = 45;
// 	int *range;

// 	int counter = 0;
// 	int i = 0;
// 	int package = ft_ultimate_range(&range, min, max);
// 	while (i <= max - min)
// 	{
// 		printf("%d ", range[i]);
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

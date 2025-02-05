/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:25:59 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 16:13:25 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int	main(void)
{
	int result = ft_strcmp("aaaa", "aaaa");
	int flag = 0;
	printf("----------------Tester.exe---------------\n");
	printf("(aaaa) (aaaa)\n");
	printf("Expected 0\n");
	printf("Got %d\n", result);
	if (result == 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strcmp("aaaaa", "aaaa");
	printf("(aaaaa) (aaaa)\n");
	printf("Expected Positive\n");
	printf("Got %d\n", result);
	if (result > 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strcmp("aaaa", "aaa");
	printf("(aaaa) (aaa)\n");
	printf("Expected Positive\n");
	printf("Got %d\n", result);
	if (result > 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strcmp("aaaa", "aaaz");
	printf("(aaaa) (aaaz)\n");
	printf("Expected Negative\n");
	printf("Got %d\n", result);
	if (result < 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strcmp("aaa", "aaaa");
	printf("(aaa) (aaaa)\n");
	printf("Expected Negative\n");
	printf("Got %d\n", result);
	if (result < 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	printf("\n\n");
	if (flag == 0)
	{
		printf("------------------WORKING AS IT SHOULD BE!!-----------------\n");
	}
	else
	{
		printf("-------------------FAILED------------------\n");
		flag += 1;
	}
	printf("\n");
}

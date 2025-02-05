/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:42:39 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/30 12:30:08 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int result = ft_strncmp("aaaa", "aaa", 3);
	int flag = 0;
	printf("----------------Tester.exe---------------\n");
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
	result = ft_strncmp("aaaa", "aaa", 4);
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
	result = ft_strncmp("aaaz", "aaaa", 4);
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
	result = ft_strncmp("aaa", "aaaa", 4);
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
	result = ft_strncmp("aaaa", "aaaz", 4);
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
}

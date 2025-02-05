/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:44:07 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 19:11:31 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		st;
	char	*str;

	str = (char *)malloc(10000);
	i = 0;
	j = 0;
	if (size <= 0)
		return (str);
	while (i < size)
	{
		st = -1;
		while (strs[i][++st] != '\0')
		{
			str[j++] = strs[i][st];
		}
		st = -1;
		while (sep[++st] != '\0' && i < size - 1)
			str[j++] = sep[st];
		i++;
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>

// int main (int argc, char **argv)
// {
// 	int i = 0;
// 	int size = 4;
// 	char *arr;
// 	char text[] = "1234";
// 	arr = ft_strjoin(size , argv, text);
// 	printf("%s", arr);
// }

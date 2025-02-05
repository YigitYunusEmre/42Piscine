/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:41:58 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 14:49:24 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		count;
	char	*save;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	save = (char *)malloc(count + 1);
	i = 0;
	while (src[i] != '\0')
	{
		save[i] = src[i];
		i++;
	}
	save[i] = '\0';
	return (save);
}
//what the hell is MALLOCC???
// #include <stdio.h>

// int main (void)
// {
// 	printf("%s", ft_strdup("Hello :)\n"));
// }

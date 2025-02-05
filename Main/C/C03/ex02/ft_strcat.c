/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:37:39 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 10:56:37 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char Ftext1[] = "3rd week of pisine already?";
	char Ftext2[] = "Piscine almost over, now I can sleep well...";
	char text1_1[100] = "3rd week of ";
	char text1_2[] = "pisine already?";
	char text2_1[100] = "Piscine almost over, ";
	char text2_2[] = "now I can sleep well...";
	printf("----------------Tester.exe---------------\n");
	printf("Expected: \n---%s---\n", Ftext1);
	printf("Got \n---%s---\n", ft_strcat(text1_1, text1_2));
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n---%s---\n", Ftext2);
	printf("Got \n---%s---\n", ft_strcat(text2_1, text2_2));
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}

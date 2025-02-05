/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:34:13 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/03 14:25:57 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
#include <stdio.h>

// void	ft_putstr(char *str);
int	main(void)
{
	char text1[] = "Why are we still here, just to suffer?";
	int flag = 0;
	printf("----------------Tester.exe---------------\n");
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n%s\n", text1);
	printf("Got: \n");
	ft_putstr(text1);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("--------------End-------------\n");
	printf("\n");
}

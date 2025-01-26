/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:29 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/18 20:38:31 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main (int argc, char **argv) {
// 	int text;
// 	text = ft_strlen(argv);
// 	printf("%d", text);

// 	// printf("%d", ft_strlen("OBDANA GET DOWN"));
// }

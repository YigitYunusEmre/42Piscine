/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:22:48 by yuyigit           #+#    #+#             */
/*   Updated: 2025/02/04 11:14:14 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
				return (str += i - n + 1);
		}
		else
		{
			n = 0;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main (void) {
// 	char hay[] = "Birds are a drone created by dr the government to spy on us";
// 	char needle[] = "dr";
// 	printf("%s", ft_strstr(hay, needle));
// 	return(0);
// }

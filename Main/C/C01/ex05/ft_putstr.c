/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:24:56 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/18 20:17:33 by yuyigit          ###   ########.fr       */
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

// int main (int argc, char **argv) {
// 	ft_putstr(argv[1]);
// }

// int main (void) {
// 	char *idk;
// 	idk = "yes man I love sitting in a room with 90 other people everyday";
// 	ft_putstr(idk);
// }

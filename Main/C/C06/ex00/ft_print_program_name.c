/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:58:39 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/23 16:14:49 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	argv = 1;
	while (argc[0][i] != '\0')
	{
		write(1, &argc[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

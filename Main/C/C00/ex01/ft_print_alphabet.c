/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <editor.tabSize>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:35:15 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/15 18:11:52 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

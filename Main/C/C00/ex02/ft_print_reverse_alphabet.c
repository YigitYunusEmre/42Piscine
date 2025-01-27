/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <editor.tabSize>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:41:06 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/15 18:12:49 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}

/*
int main (void) {
    ft_print_reverse_alphabet();
    return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:46:14 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/25 15:34:37 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;

	i = nb;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb / -1;
	}
	if (nb < 10 && nb >= 0)
	{
		i = nb + '0';
		write(1, &i, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		i = (nb % 10) + '0';
		write(1, &i, 1);
	}
}
// int main (void){
// 	ft_putnbr(130);
// 	return(0);
// }

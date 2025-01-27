/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:27:50 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/16 11:40:57 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_runner(int a, int b, int c)
{
	a = '0';
	b = '0';
	c = '0';
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	ft_runner(a, b, c);
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!(a == '9' && b == '9' && c == '9'))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

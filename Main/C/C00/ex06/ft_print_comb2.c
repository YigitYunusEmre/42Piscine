/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <editor.tabSize>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:40:48 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/15 18:33:58 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	num(char c)
{
}

void	ft_print_comb2(int a, int b, int c, int d)
{
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					write(1, " ", 1);
					ft_putchar(c);
					ft_putchar(d); 
					if (!(a == '9' && b == '9' && c == '9' && d == '9'))
					{
						write(1, ", ", 2);
					}
					d++;
				}
				d = '0';
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
	ft_print_comb2();
	return (0);
}

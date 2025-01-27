/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:41:57 by nashena           #+#    #+#             */
/*   Updated: 2025/01/19 19:03:25 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row(char left, char mid, char right, int width)
{
	int	i;

	i = 0;
	if (width <= 0)
	{
		return ;
	}
	ft_putchar(left);
	while (i < width - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (width > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	row('A', 'B', 'C', x);
	while (i < y)
	{
		row('B', ' ', 'B', x);
		i++;
	}
	if (y > 1)
	{
		row('C', 'B', 'A', x);
	}
}

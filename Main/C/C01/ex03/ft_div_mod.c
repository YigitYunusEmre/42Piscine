/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:42:39 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/19 09:09:39 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main (void) {
// 	int a = 22;
// 	int b = 10;
// 	int div;
// 	int mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n%d", div, mod);
// }

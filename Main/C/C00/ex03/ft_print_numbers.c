/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyigit <yuyigit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:43:38 by yuyigit           #+#    #+#             */
/*   Updated: 2025/01/14 18:47:52 by yuyigit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void) {
    int i = '0';
    while (i <= '9') {
        write(1, &i, 1);
        i++;
    }
}

int main (void) {
    ft_print_numbers();
    return(0);
}
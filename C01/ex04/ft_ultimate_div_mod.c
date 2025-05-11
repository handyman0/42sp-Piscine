/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:06:03 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/21 14:50:23 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

/*
#include <stdio.h>

int main(void)
{
	int a = 13;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("O resultado da divisão: %d, o resto: %d", a, b);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

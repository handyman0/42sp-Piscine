/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 08:12:44 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/13 17:17:34 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int main(void){
	int a = 5;
	int b = 10;

	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
*/
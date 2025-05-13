/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 08:33:18 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/13 17:19:06 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main (){
	int a = 13;
	int b = 5;
	int d, m;

	ft_div_mod(a, b, &d, &m);
	printf("div: %d, mod: %d\n", d, m);
	return (0);
}
*/
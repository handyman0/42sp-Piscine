/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 01:38:39 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/07 16:31:37 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while ((long)i * i < nb / 2)
		i++;
	if ((long)i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("0 = %d (0)\n", ft_sqrt(0));
	printf("1 = %d (1)\n", ft_sqrt(1));
	printf("4 = %d (2)\n", ft_sqrt(4));
	printf("9 = %d (3)\n", ft_sqrt(9));
	printf("16 = %d (4)\n", ft_sqrt(16));
	printf("25 = %d (5)\n", ft_sqrt(25));
	printf("36 = %d (6)\n", ft_sqrt(36));
	printf("49 = %d (7)\n", ft_sqrt(49));
	printf("64 = %d (8)\n", ft_sqrt(64));
	printf("2147395600 = %d (46340)\n", ft_sqrt(2147395600));
}
 */

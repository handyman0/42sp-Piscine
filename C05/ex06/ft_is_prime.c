/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 01:53:54 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/07 02:19:04 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while ((long)i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
	i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("0 = %d (0) sobrinho\n", ft_is_prime(0));
	printf("1 = %d (0) sobrinho\n", ft_is_prime(1));
	printf("2 = %d (1) Primo\n", ft_is_prime(2));
	printf("3 = %d (1) Primo\n", ft_is_prime(3));
	printf("4 = %d (0) sobrinho\n", ft_is_prime(4));
	printf("5 = %d (1) Primo\n", ft_is_prime(5));
	printf("6 = %d (0) sobrinho\n", ft_is_prime(6));
	printf("7 = %d (1) Primo\n", ft_is_prime(7));
	printf("8 = %d (0) sobrinho\n", ft_is_prime(8));
	printf("9 = %d (0) sobrinho\n", ft_is_prime(9));
	printf("10 = %d (0) sobrinho\n", ft_is_prime(10));
	printf("11 = %d (1) Primo\n", ft_is_prime(11));
}
 */

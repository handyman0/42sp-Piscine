/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:47:52 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/17 20:01:56 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char centena, char dezena, char unidade)
{
	write(1, &centena, 1);
	write(1, &dezena, 1);
	write(1, &unidade, 1);
	if (centena != '7' || dezena != '8' || unidade != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	centena;
	char	dezena;
	char	unidade;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '8')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				ft_putchar(centena, dezena, unidade);
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}

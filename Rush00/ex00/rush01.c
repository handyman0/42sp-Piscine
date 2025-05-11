/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:07:36 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/19 22:34:03 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0)
				|| (row == y - 1 && col == x - 1 && x > 1 && y > 1))
				ft_putchar('/');
			else if ((row == 0 && col == x - 1)
				|| (row == y - 1 && col == 0))
				ft_putchar('\\');
			else if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}


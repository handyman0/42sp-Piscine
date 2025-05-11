/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:32:44 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/21 14:44:16 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
/*#include	<stdio.h>
void	ft_rev_int_tab(int *tab, int size);
int main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	printf("Antes da inversão: ");

	for	(i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Depois da inversão: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

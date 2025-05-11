/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:41:35 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/07 17:46:51 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return(-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return(size);
}

#include <stdio.h>
int	main()
{
	int	*array;
	int	size;
	int i;

	size = ft_ultimate_range(&array, 5, 10);
	if (size == -1)
	{
		printf("Erro no malloc\n");
		return(1);
	}
	printf("Tamanho %d\n", size);
	for(i = 0; i < size; i++)
		printf("%d", array[1]);

	printf("\n");
	free(array);
	return(0);
}

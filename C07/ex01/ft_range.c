/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 06:04:44 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/07 16:17:13 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return(ptr);
}

#include <stdio.h>
int main()
{
	int	*range;
	int	i;
	int min = 5;
	int max = 15;
	range = ft_range(min, max);
	if (range)
	{
		for(i = 0; i < max - min; i++)
			printf("%d ", range[i]);
		printf("\n");
		free(range);
	}
	return(0);
}

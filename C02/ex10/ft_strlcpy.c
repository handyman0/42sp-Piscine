/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:10:02 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/23 19:11:35 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Source";
	char dest[100] = "";
	unsigned int n;

	n = 4;
	printf("Antes\n\tsrc: %s\n\tdest: %s\n\tsize: %u\n", src, dest, n);
	n = ft_strlcpy(dest, src, n);
	printf("Depois\n\tsrc: %s\n\tdest: %s\n\tsize: %u\n", src, dest, n);
	return (0);
}
*/

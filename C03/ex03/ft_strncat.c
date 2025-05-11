/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:29:26 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/01 19:55:55 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	printf("Exercício 03 : ft_strncat\n\n");

	char dest[100] = "Usando ft_strncat: ";
	char src[100] = "essa parte será adicionada, o resto será ignorado.";

	char dest1[100] = "Usando strncat: ";
	char src2[100] = "essa parte será adicionada, o resto será ignorado.";

	ft_strncat(dest, src, 19);
	printf("Resultado (ft_strncat): %s\n", dest);

	strncat(dest1, src2, 19);
	printf("Resultado esperado (strncat): %s\n", dest1);

	return 0;
}
*/

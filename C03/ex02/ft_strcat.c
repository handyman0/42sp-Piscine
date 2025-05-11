/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:09:51 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/01 20:18:46 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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

char *ft_strcat(char *dest, char *src);

int main(void) {
	printf("Exercice 02 : ft_strcat \n\n");
	char str1[100] = "Hello, ", str2[] = "Pinguin Dança 42";
	char str3[100] = "Hello, ", str4[] = "Pinguin";

	ft_strcat(str1, str2);
	printf("Resultado: %s\n\n", str1);

	strcat(str3, str4);
	printf("Experado: %s \n", str3);
}
*/

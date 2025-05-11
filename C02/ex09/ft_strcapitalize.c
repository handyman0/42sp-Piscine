/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:10:39 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/23 19:02:27 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	ft_is_alpha_numeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	nova_palavra;

	nova_palavra = 1;
	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z' && nova_palavra))
			str[index] -= 32;
		else if ((str[index] >= 'A' && str[index] <= 'Z' && nova_palavra))
			str[index] += 32;
		nova_palavra = !ft_is_alpha_numeric(str[index]);
		index++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/

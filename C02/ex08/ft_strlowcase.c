/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:05:51 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/23 19:15:29 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Z'))
			str[index] += 32;
		index++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "HeLlo, 42";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/

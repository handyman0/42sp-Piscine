/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:51:24 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/23 19:14:26 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "HeLlo, 42";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/

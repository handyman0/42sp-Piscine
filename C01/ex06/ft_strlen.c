/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:17:32 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/21 14:52:17 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
/*
#include <stdio.h>
int main()
{
	char *s;

	s = "ja chegou o disco voador!";
	printf("%d\n", ft_strlen(s));
}
*/

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
	{
		size++;
	}
	return (size);
}

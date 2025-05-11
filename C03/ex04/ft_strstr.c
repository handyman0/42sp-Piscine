/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:56:30 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/01 19:56:32 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";
	char *ptr;

	ptr = strstr(largestring, smallstring);

	printf("Large string: %s\n\n", largestring);
	printf("Small string: %s\n\n", smallstring);

	printf("Command: %s \n", ptr);

	printf("Function: %s\n\n", ft_strstr(largestring, smallstring));
}
*/

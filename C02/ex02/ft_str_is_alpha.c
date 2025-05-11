/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:04:34 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/04/23 19:17:31 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z')
				|| (str[index] >= 'A' && str[index] <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("\"oi\" -> %d\n", ft_str_is_alpha("oi")); // 1
	printf("\"**\" -> %d\n", ft_str_is_alpha("**")); // 0
	printf("\"\" -> %d\n", ft_str_is_alpha("")); // 1
	printf("\"OlaMundo\" -> %d\n", ft_str_is_alpha("OlaMundo")); // 1
	printf("\"42 SP\" -> %d\n", ft_str_is_alpha("42 SP")); // 0
	return 0;
}
*/

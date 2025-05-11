/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 03:36:00 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 06:19:26 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

static int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_valid_arg(char *str)
{
	if (!str || !*str)
		return (0);
	while (*str)
	{
		if (!ft_is_digit(*str))
			return (0);
		str++;
	}
	return (1);
}

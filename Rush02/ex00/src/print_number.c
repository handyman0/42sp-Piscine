/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 05:06:58 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 06:35:13 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

void	print_number(const char *number)
{
	if (!number)
	{
		write(1, "Error: NULL number\n", 19);
		return;
	}
	write(1, number, ft_strlen(number));
}

void	print_word(const char *word)
{
	if (!word)
	{
		write(1, "Error: NULL word\n", 17);
		return;
	}
	write(1, word, ft_strlen(word));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 06:15:52 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 07:36:09 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

void	convert_number(const char *nbr, t_dict_entry *dict)
{
	int		len = ft_strlen(nbr);
	int		num_trios = (len + 2) / 3;
	int		start = len % 3;
	int		i = 0;

	if (start == 0)
		start = 3;

	while (i < len)
	{
		char trio[4] = {0};
		int j = 0;

		// Copia o trio atual
		while (j < 3 && i < len)
			trio[j++] = nbr[i++];

		// Se o trio não for "000", processa
		if (!(trio[0] == '0' && trio[1] == '0' && trio[2] == '0'))
		{
			print_trio(trio, dict);
			if (num_trios - 1 > 0)
			{
				char *scale = get_scale(num_trios - 1, dict);
				if (scale)
					print_number(scale);
				else
					print_number("Dict Error");
			}
		}
		num_trios--;
	}
}

char	*get_scale(int power, t_dict_entry *dict)
{
	int zeros = power * 3;
	char key[100];
	key[0] = '1';
	for (int i = 1; i <= zeros; i++)
		key[i] = '0';
	key[zeros + 1] = '\0';

	return (dict_search(key, dict, MAX_ENTRIES));
}

int	print_trio(char *trio, t_dict_entry *dict)
{
	int		i = 0;
	int		len = ft_strlen(trio);
	char	key[4] = {0};
	const char	*value;

	while (i < len)
	{
		// Verifica a posição do dígito no trio (centenas, dezenas, unidades)
		if (len - i == 3 && trio[i] != '0') // Centenas
		{
			key[0] = trio[i];
			key[1] = '\0';
			value = lookup_value(dict, MAX_ENTRIES, key);
			if (value)
			{
				print_number(value);
				print_number(" hundred");
			}
			else
				return (1);
			if (trio[i + 1] != '0' || trio[i + 2] != '0')
				print_number(" ");
		}
		else if (len - i == 2 && trio[i] != '0') // Dezenas
		{
			if (trio[i] == '1') // Caso especial: números entre 10 e 19
			{
				key[0] = trio[i];
				key[1] = trio[i + 1];
				key[2] = '\0';
				value = lookup_value(dict, MAX_ENTRIES, key);
				if (value)
					print_number(value);
				else
					return (1);
				return (0); // Não processa unidades após "teens"
			}
			else // Dezenas normais (20, 30, etc.)
			{
				key[0] = trio[i];
				key[1] = '0';
				key[2] = '\0';
				value = lookup_value(dict, MAX_ENTRIES, key);
				if (value)
					print_number(value);
				else
					return (1);
				if (trio[i + 1] != '0')
					print_number(" ");
			}
		}
		else if (len - i == 1 && trio[i] != '0') // Unidades
		{
			key[0] = trio[i];
			key[1] = '\0';
			value = lookup_value(dict, MAX_ENTRIES, key);
			if (value)
				print_number(value);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

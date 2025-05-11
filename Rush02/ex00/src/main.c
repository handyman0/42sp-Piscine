/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:13:31 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 07:18:10 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

int	main(int argc, char **argv)
{
	t_dict_entry	dict[MAX_ENTRIES];
	int				dict_size;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 3)
		dict_size = read_dict(argv[1], dict);
	else
		dict_size = read_dict("numbers.dict", dict);
	if (dict_size == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	convert_number(argv[argc - 1], dict);
	return (0);
}

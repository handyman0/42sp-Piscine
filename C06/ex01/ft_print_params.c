/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:18:31 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/06 19:51:47 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 1;
	d = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}

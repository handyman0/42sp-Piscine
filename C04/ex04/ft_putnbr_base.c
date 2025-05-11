/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:12:54 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/05 17:28:41 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		return (1);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j] < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || ft_error(base))
		return ;
	if (ft_error(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}
/*
int	main()
{
	ft_putnbr_base(20, "01234+56789");
	write(1, "\n", 1);
	ft_putnbr_base(1, "01");
	write(1, "\n", 1);
	ft_putnbr_base(20, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(2, "poneyvif");

	return (0);
}
 */

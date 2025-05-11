/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:01:58 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/05 18:46:28 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Retorna o comprimento da string */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* Verifica se a base é válida */
int	ft_ver_bas(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* Retorna o índice de um caractere na base, ou -1 se não estiver presente */
int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/* Converte uma string numérica para inteiro com base customizada */
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	index;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (!ft_ver_bas(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	index = ft_get_index(str[i], base);
	while (index != -1)
	{
		result = result * base_len + index;
		i++;
	}
	return (result * sign);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("1010", "01"));					// 10
	printf("%d\n", ft_atoi_base("A", "0123456789ABCDEF"));		// 10
	printf("%d\n", ft_atoi_base("   -2A", "0123456789ABCDEF"));	// -42
	printf("%d\n", ft_atoi_base("42", "0123456789"));			// 42
	printf("%d\n", ft_atoi_base("123", "1+23"));				// 0 (base inválida)
	return (0);
}
 */

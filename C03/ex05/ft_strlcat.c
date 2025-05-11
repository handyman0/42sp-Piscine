/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:59:14 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/05 17:19:13 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	dest_len;
	unsigned int	src_len;

	a = 0;
	b = 0;
	while (dest[a] && a < size)
		a++;
	dest_len = a;
	while (src[b])
		b++;
	src_len = b;
	if (size <= dest_len)
		return (size + src_len);
	b = 0;
	while (src[b] && (dest_len + 1) < size)
	{
		dest[dest_len] = src[b];
		dest_len++;
		b++;
	}
	dest[dest_len] = '\0';
	return (a + src_len);
}

/* #include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void) {
	char str1[10] = "ABC";
	char str2[100] = "DEF";
	unsigned int size = 10;

	printf("Resultado: %i\n", ft_strlcat(str1, str2, size));
	printf("String final: %s\n", str1);
	return 0;
}
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:24:10 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 07:53:02 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((i < n) && !diff && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}

/* int	main(void)
{
	char str1[3] = "ABC";
	char str2[100] = "DEF";
	unsigned int size;
	size = 10;

	printf("Result: %i \n\n", ft_strncmp(str1, str2, sizeof(str1)));
	return (0);
} */

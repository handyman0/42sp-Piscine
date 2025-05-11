/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 05:08:24 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 07:15:08 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

char	*dict_search(const char *key, t_dict_entry *dict, int dict_size)
{
    if (!key || !dict)
        return (NULL);

    for (int i = 0; i < dict_size; i++)
    {
        if (dict[i].key && ft_strcmp(dict[i].key, key) == 0)
            return (dict[i].value);
    }
    return (NULL);
}

char	*trim_spaces(char *str)
{
	char	*end;

	if (!str)
		return (NULL);

	while (*str == ' ')
		str++;

	if (*str == '\0')
		return (str);

	end = str + ft_strlen(str) - 1;
	while (end > str && *end == ' ')
		end--;
	*(end + 1) = '\0';

	return (str);
}


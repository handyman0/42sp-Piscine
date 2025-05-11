/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:14:09 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 07:18:58 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

const char *lookup_value(t_dict_entry *dict, int dict_size, const char *key)
{
    for (int i = 0; i < dict_size; i++)
    {
        if (dict[i].key && ft_strcmp(dict[i].key, key) == 0)
            return dict[i].value;
    }
    return NULL;
}

int	read_dict(const char *filename, t_dict_entry *dict)
{
    int		fd;
    char	buffer[MAX_LINE];
    int		bytes_read;
    int		i = 0;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        write(2, "Error: Cannot open dictionary file\n", 35);
        return (-1);
    }
    while ((bytes_read = read(fd, buffer, MAX_LINE - 1)) > 0 && i < MAX_ENTRIES)
    {
        buffer[bytes_read] = '\0';
        char *line = buffer;
        while (*line)
        {
            char *colon = line;
            while (*colon && *colon != ':')
                colon++;
            if (*colon != ':')
                break;
            *colon = '\0';
            char *key = line;
            char *value = colon + 1;

            // Remove espaços iniciais e finais
            key = trim_spaces(key);
            value = trim_spaces(value);

            // Verifica se key e value são válidos
            if (!key || !value || *key == '\0' || *value == '\0')
            {
                write(2, "Error: Invalid dictionary entry\n", 32);
                close(fd);
                return (-1);
            }

            // Adiciona a entrada no dicionário
            dict[i].key = malloc(ft_strlen(key) + 1);
            dict[i].value = malloc(ft_strlen(value) + 1);
            if (!dict[i].key || !dict[i].value)
            {
                if (dict[i].key)
                    free(dict[i].key);
                if (dict[i].value)
                    free(dict[i].value);
                close(fd);
                return (-1);
            }
            ft_strcpy(dict[i].key, key);
            ft_strcpy(dict[i].value, value);
            i++;

            // Avança para a próxima linha
            while (*line && *line != '\n')
                line++;
            if (*line == '\n')
                line++;
        }
    }
    close(fd);
    return (i);
}

int	ft_strlen(const char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int	ft_strcmp(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return (-1);

    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_strcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

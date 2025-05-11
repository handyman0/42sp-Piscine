/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 03:37:32 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/05/04 06:55:33 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

// Definições de constantes
# define MAX_LINE 1024
# define MAX_ENTRIES 1000

// Estrutura para armazenar entradas do dicionário
typedef struct s_dict_entry
{
    char	*key;   // Chave numérica (ex: "1000")
    char	*value; // Valor correspondente (ex: "mil")
}	t_dict_entry;

// Funções de dict_utils.c
/**
 * Procura um valor no dicionário com base na chave fornecida.
 * @param dict O array de entradas do dicionário.
 * @param dict_size O tamanho do dicionário.
 * @param key A chave a ser procurada.
 * @return O valor correspondente ou NULL se não encontrado.
 */
const char	*lookup_value(t_dict_entry *dict, int dict_size, const char *key);

/**
 * Lê o dicionário de um arquivo e o armazena no array de entradas.
 * @param filename O caminho para o arquivo do dicionário.
 * @param dict O array de entradas do dicionário.
 * @return O número de entradas lidas ou -1 em caso de erro.
 */
int			read_dict(const char *filename, t_dict_entry *dict);

/**
 * Calcula o comprimento de uma string.
 * @param str A string a ser medida.
 * @return O comprimento da string.
 */
int			ft_strlen(const char *str);

// Funções de convert_number.c
/**
 * Converte um número para sua forma escrita por extenso.
 * @param nbr O número a ser convertido.
 * @param dict O dicionário a ser usado para a conversão.
 */
void		convert_number(const char *nbr, t_dict_entry *dict);

/**
 * Obtém a palavra correspondente a uma escala (ex: "mil", "milhão").
 * @param power A potência de 10 (ex: 3 para "mil").
 * @param dict O dicionário a ser usado.
 * @return A palavra correspondente ou NULL se não encontrada.
 */
char		*get_scale(int power, t_dict_entry *dict);

/**
 * Imprime um trio de dígitos como palavras.
 * @param trio O trio de dígitos (ex: "123").
 * @param dict O dicionário a ser usado.
 * @return 0 em caso de sucesso ou 1 em caso de erro.
 */
int			print_trio(char *trio, t_dict_entry *dict);

// Funções de dictionary.c
/**
 * Procura uma chave no dicionário e retorna o valor correspondente.
 * @param key A chave a ser procurada.
 * @param dict O array de entradas do dicionário.
 * @param dict_size O tamanho do dicionário.
 * @return O valor correspondente ou NULL se não encontrado.
 */
char		*dict_search(const char *key, t_dict_entry *dict, int dict_size);

// Funções de ft_is_valid_arg.c
/**
 * Verifica se uma string é um argumento numérico válido.
 * @param str A string a ser validada.
 * @return 1 se for válido, 0 caso contrário.
 */
int			ft_is_valid_arg(char *str);

// Funções de print_number.c
/**
 * Imprime um número como uma string.
 * @param number A string do número a ser impressa.
 */
void		print_number(const char *number);

/**
 * Imprime uma palavra como uma string.
 * @param word A string da palavra a ser impressa.
 */
void		print_word(const char *word);

int	ft_strcmp(const char *s1, const char *s2);
char	*trim_spaces(char *str);
void	ft_strcpy(char *dest, const char *src);

#endif


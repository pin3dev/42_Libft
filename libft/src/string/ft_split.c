/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of words in a string separated by a delimiter.
 * 
 * This function counts how many words (substrings) are present in the string `str`,
 * using the character `c` as the delimiter.
 * 
 * @param str The input string to be scanned.
 * @param c The delimiter character that separates words.
 * 
 * @return The number of words found in the string.
 */
static int	count_words(char const *str, char c)
{
	int	words;
	int	flag;

	words = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (words);
}
/**
 * @brief Counts the number of letters in a word.
 * 
 * This function counts the number of consecutive characters in the string `str` starting at index `i`
 * until the delimiter `c` is found or the end of the string is reached.
 * 
 * @param str The input string to be scanned.
 * @param c The delimiter character that separates words.
 * @param i The starting index from which to begin counting.
 * 
 * @return The number of letters in the current word.
 */
static int	count_letters(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		size++;
		i++;
	}
	return (size);
}
/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 * 
 * This function splits the string `s` into an array of substrings, using the character `c` as
 * the delimiter. Each substring is extracted from the original string, and memory is allocated
 * for each substring. The resulting array is NULL-terminated.
 * 
 * @param s The input string to be split.
 * @param c The delimiter character used to separate substrings.
 * 
 * @return A pointer to an array of strings (substrings), or `NULL` if memory allocation fails.
 * 
 * @note If the input string `s` is `NULL`, the function returns `NULL`.
 */
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = -1;
	word = count_words(s, c);
	str = (char **)malloc((word + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, count_letters(s, c, i));
		if (!str)
			return (NULL);
		i += count_letters(s, c, i);
	}
	str[j] = 0;
	return (str);
}

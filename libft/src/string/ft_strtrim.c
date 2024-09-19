/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:56:44 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Copies up to `n` characters from the source string to the destination, padding with null bytes.
 * 
 * This static helper function copies up to `n` characters from the string `src` to `dest`.
 * If the source string is shorter than `n`, the remaining characters in `dest` are filled with `\0`.
 * 
 * @param dest The destination buffer where the string will be copied.
 * @param src The source string to copy from.
 * @param n The maximum number of characters to copy.
 * 
 * @return A pointer to the destination string `dest`.
 */
static char	*ncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/**
 * @brief Trims leading and trailing characters from a string.
 * 
 * This function removes all leading and trailing characters from the string `s1` that are
 * present in the set of characters defined by `set`. The result is a newly allocated string
 * that contains the trimmed portion of `s1`, or `NULL` if memory allocation fails.
 * 
 * @param s1 The input string to be trimmed.
 * @param set The set of characters to be trimmed from the beginning and end of `s1`.
 * 
 * @return A pointer to the newly allocated trimmed string, or `NULL` if memory allocation fails.
 * 
 * @note If `s1` or `set` is `NULL`, the function returns `NULL`.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1);
	while (end > beg && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc(sizeof(char) * (end - beg + 1));
	if (!trimmed)
		return (NULL);
	ncpy(trimmed, s1 + beg, end - beg);
	trimmed[end - beg] = '\0';
	return (trimmed);
}

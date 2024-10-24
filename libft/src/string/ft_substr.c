/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a given string.
 * 
 * This function allocates memory and returns a substring from the string `s`. The substring 
 * begins at the index `start` and has a maximum length of `len` characters. If `start` is beyond 
 * the length of the string `s`, an empty string is returned.
 * 
 * @param s The input string from which to extract the substring.
 * @param start The starting index of the substring in the string `s`.
 * @param len The maximum length of the substring.
 * 
 * @return A pointer to the newly allocated substring, or `NULL` if memory allocation fails.
 * 
 * @note If `s` is `NULL`, the function returns `NULL`. If `start` is greater than the length of `s`, 
 *       the function returns an empty string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*string;
	unsigned int		i;
	unsigned int		a;

	if (!s)
		return (NULL);
	i = start;
	a = 0;
	if (start > ft_strlen(s))
	{
		string = malloc(1 * sizeof(char));
		if (string == NULL)
			return (NULL);
		string[0] = '\0';
		return (string);
	}
	string = malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (i < ft_strlen(s) && len-- > 0)
		string[a++] = s[i++];
	string[a] = '\0';
	return (string);
}

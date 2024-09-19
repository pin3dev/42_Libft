/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:56:02 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * This function scans the string `s` for the last occurrence of the character `c`. The
 * search includes the null-terminating character (`\0`). If the character `c` is found,
 * a pointer to the last occurrence in the string is returned. If `c` is not found, 
 * the function returns `NULL`.
 * 
 * @param s The string to be scanned.
 * @param c The character to search for, passed as an `int` but cast to `char`.
 * 
 * @return A pointer to the last occurrence of the character `c` in the string `s`,
 *         or `NULL` if the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

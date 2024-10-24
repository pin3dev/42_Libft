/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * This function scans the string `str` for the first occurrence of the character `c`.
 * The search includes the terminating null byte (`\0`), meaning it can be used to find 
 * both regular characters and the null terminator.
 * 
 * @param str The string to be scanned.
 * @param c The character to locate, passed as an `int` but cast to `char`.
 * 
 * @return A pointer to the first occurrence of the character `c` in the string `str`, 
 *         or `NULL` if the character is not found.
 */
char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

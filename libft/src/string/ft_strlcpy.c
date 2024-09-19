/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:53:49 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Copies a string to a destination buffer, ensuring null-termination and preventing overflow.
 * 
 * This function copies up to `size - 1` characters from the string `src` to the buffer `dest`,
 * ensuring that the result is null-terminated if `size` is not 0.
 * 
 * @param dest The destination buffer where the string will be copied.
 * @param src The source string to copy from.
 * @param size The total size of the destination buffer.
 * 
 * @return The total length of the string `src`, regardless of how many characters were actually copied.
 * 
 * @note If `size` is 0, the function returns the length of `src` but does not copy anything.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	src_len;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	index = 0;
	while (src[index] && (index < size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_len);
}

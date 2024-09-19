/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:53:24 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Concatenates two strings, ensuring the result is null-terminated and fits within a given size.
 * 
 * This function appends the string `src` to the end of `dest`. It will append at most `size - strlen(dest) - 1` characters from `src`,
 * ensuring that the resulting string is null-terminated as long as `size` is greater than `strlen(dest)`.
 * 
 * @param dest The destination string to which `src` will be appended.
 * @param src The source string to append to `dest`.
 * @param size The total size of the destination buffer, including the null-terminator.
 * 
 * @return The total length of the string `src` plus the length of `dest`. If the return value is greater than or equal to `size`,
 *         truncation occurred.
 * 
 * @note If `size` is 0, the function returns the length of `src`. If `size` is smaller than or equal to the length of `dest`,
 *       the function returns `src_size + size`.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	if (!dest && !src)
		return (0);
	i = 0;
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (src_size + size);
	while (dest_size + i < (size - 1) && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

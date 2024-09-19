/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:48:01 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Copies memory from source to destination, allowing for overlapping memory areas.
 * 
 * This function copies `n` bytes from the memory area `src` to the memory area `dst`.
 * Unlike `ft_memcpy`, `ft_memmove` handles overlapping memory areas correctly. If `dst` and `src`
 * overlap, the copying is performed in a way that ensures the original data in `src` is not corrupted.
 * 
 * @param dst A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of bytes to copy.
 * 
 * @return A pointer to the destination memory area `dst`.
 * 
 * @note If both `dst` and `src` are `NULL`, the function returns `NULL`.
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*mem_dst;
	const unsigned char	*mem_src;

	if (!dst && !src)
		return (NULL);

	mem_dst = (unsigned char *)dst;
	mem_src = (const unsigned char *)src;
	if (mem_dst > mem_src && mem_dst < mem_src + n)
	{
		while (n--)
			mem_dst[n] = mem_src[n];
	}
	else
	{
		while (n--)
			*mem_dst++ = *mem_src++;
	}
	return (dst);
}

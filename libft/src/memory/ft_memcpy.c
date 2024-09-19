/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:47:38 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Copies memory from one location to another.
 * 
 * This function copies `len` bytes from the memory area `src` to the memory area `dest`. 
 * The memory areas must not overlap. If `src` and `dest` are both `NULL`, the function 
 * returns `NULL`.
 * 
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param len The number of bytes to copy.
 * 
 * @return A pointer to the destination memory area `dest`.
 * 
 * @note If both `src` and `dest` are `NULL`, the function returns `NULL`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	if (!src && !dest)
		return (NULL);

	unsigned char	*mem_src;
	unsigned char	*mem_dest;

	mem_src = (unsigned char *)src;
	mem_dest = (unsigned char *)dest;
	while (len--)
		*mem_dest++ = *mem_src++;

	return (dest);
}

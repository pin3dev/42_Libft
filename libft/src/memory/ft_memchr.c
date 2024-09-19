/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:46:37 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Locates the first occurrence of a byte in a block of memory.
 * 
 * This function scans the first `n` bytes of the memory area pointed to by `str`
 * for the first occurrence of the byte `c`. The search stops as soon as the byte is found,
 * or after `n` bytes have been scanned.
 * 
 * @param str A pointer to the block of memory to be scanned.
 * @param c The byte to search for, passed as an `int` but treated as an unsigned char.
 * @param n The number of bytes to scan.
 * 
 * @return A pointer to the first occurrence of the byte `c` in the memory block, 
 *         or `NULL` if the byte is not found within the first `n` bytes.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;
	
	ptr = (const unsigned char *)str;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (void *)ptr;
		ptr++;
	}
	return (NULL);
}

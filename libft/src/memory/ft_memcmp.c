/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two blocks of memory.
 * 
 * This function compares the first `n` bytes of the memory areas `s1` and `s2`. The comparison
 * is done byte by byte. It returns an integer less than, equal to, or greater than zero if
 * the first byte that differs in the two memory areas has a lower, equal, or greater value
 * in `s1` than in `s2`.
 * 
 * @param s1 A pointer to the first memory block.
 * @param s2 A pointer to the second memory block.
 * @param n The number of bytes to compare.
 * 
 * @return An integer less than, equal to, or greater than zero based on the comparison:
 *         - < 0 if `s1` is less than `s2`
 *         - 0 if `s1` is equal to `s2`
 *         - > 0 if `s1` is greater than `s2`
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

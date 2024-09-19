/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:48:19 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Fills a block of memory with a specified byte.
 * 
 * This function fills the first `n` bytes of the memory area pointed to by `str` with the constant byte `c`.
 * 
 * @param str A pointer to the memory area to be filled.
 * @param c The byte to fill the memory area with, passed as an `int` but cast to an unsigned char.
 * @param n The number of bytes to fill.
 * 
 * @return A pointer to the memory area `str`.
 */
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char *)str;
	while (n--)
		*ptr++ = (unsigned char)c;

	return (str);
}

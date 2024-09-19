/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:46:14 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Allocates memory for an array and initializes it to zero.
 * 
 * This function allocates memory for an array of `nitems` elements, each of `size` bytes,
 * and initializes all bytes in the allocated memory to zero.
 * 
 * @param nitems The number of elements to allocate.
 * @param size The size of each element in bytes.
 * 
 * @return A pointer to the allocated memory, or `NULL` if the allocation fails.
 */
void	*ft_calloc(size_t nitems, size_t size)
{
	char	*arra;
	size_t	total;

	total = nitems * size;
	arra = malloc(total);
	if (!arra)
		return (NULL);

	ft_memset(arra, 0, total);

	return ((void *)arra);
}

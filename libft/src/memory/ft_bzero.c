/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a block of memory to zero.
 * 
 * This function writes `n` zero bytes to the memory area pointed to by `s`.
 * 
 * @param s A pointer to the memory area to be zeroed.
 * @param n The number of bytes to be set to zero.
 * 
 * @return This function does not return any value.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

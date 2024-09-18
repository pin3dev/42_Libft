/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 21:47:29 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

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

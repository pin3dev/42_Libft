/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 12:18:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	cont;

	if (!dst && !src)
	{
		return (0);
	}
	cont = 0;
	if (((size_t)dst) - ((size_t)src) < n)
	{
		cont = n - 1;
		while (cont < n)
		{
			((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
			cont--;
		}
	}
	else
	{
		while (cont < n)
		{
			((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
			cont++;
		}
	}
	return (dst);
}

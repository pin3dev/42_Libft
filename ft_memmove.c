/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

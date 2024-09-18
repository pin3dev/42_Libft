/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 21:45:02 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

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

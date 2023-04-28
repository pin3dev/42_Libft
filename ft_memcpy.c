/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	if (src == NULL && dest == NULL)
		return (dest);
	mem_src = (unsigned char *)src;
	mem_dest = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		mem_dest[i] = mem_src[i];
		i++;
	}
	return (mem_dest);
}

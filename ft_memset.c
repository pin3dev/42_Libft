/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((unsigned char *)str)[cont] = (unsigned char)c;
		cont++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[15] = "Dale Moleque";
	printf("String com memset: %s\n", (char *)memset(str1,'a', 10));
	char	str2[15] = "Dale Moleque";
	printf("String com ft_memset: %s\n",(char *)ft_memset(str2,'a', 10));
}*/

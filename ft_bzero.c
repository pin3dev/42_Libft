/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Dale Maluco";
	char	str2[] = "Dale Maluco";

	printf("String Original 1:%s\n", str1);
	printf("String Original 2:%s\n", str1);
	ft_bzero(str1, 10);
	printf("String 1 com ft_bzero:%s\n", str1);
	bzero(str2, 10);
	printf("String 2 com bzero:%s\n",str2);
}*/
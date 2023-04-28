/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c;

	c = 'b';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = 'w';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = 'C';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = 'y';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = '3';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = '+';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	c = '-';
	printf("o caracter e um alnum? %d \n",ft_isalpha(c));
	return(0);
}*/

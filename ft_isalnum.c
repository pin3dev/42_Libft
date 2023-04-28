/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')))
	{
		return (2048);
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
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = 'w';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = 'C';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = 'y';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = '3';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = '+';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	c = '-';
	printf("o caracter %c e um alnum? %d \n", c, ft_isalnum(c));
	return(0);
}*/

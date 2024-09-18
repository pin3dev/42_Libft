/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 13:17:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

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

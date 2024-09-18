/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 13:18:09 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isdigit(int c)
{		
	if ((c >= '0') && (c <= '9'))
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c;

	c = 'b';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = 'w';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = '-';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = '+';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = '3';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = '4';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	c = '5';
	printf("o caracter e um alnum? %d \n",ft_isdigit(c));
	return(0);
}*/

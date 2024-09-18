/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 13:18:24 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_toupper(int c)
{
	if ((c >= 0x61 && c <= 0x7A))
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c;

	c = 'b';
	printf("o char [%c] tranformado por ft_toupper fica: %c \n",c, ft_toupper(c));
	printf("o char [%c] tranformado por toupper fica: %c \n",c, toupper(c));
	c = 'G';
	printf("o char [%c] tranformado por ft_toupper fica: %c \n",c, ft_toupper(c));
	printf("o char [%c] tranformado por toupper fica: %c \n",c, toupper(c));
}*/

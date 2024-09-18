/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 13:18:21 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_tolower(int c)
{
	if ((c >= 0x41 && c <= 0x5a))
	{
		return (c + 32);
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
	printf("o char [%c] tranformado por ft_tolower fica: %c \n",c, ft_tolower(c));
	printf("o char [%c] tranformado por tolower fica: %c \n",c, tolower(c));
	c = 'G';
	printf("o char [%c] tranformado por ft_tolower fica: %c \n",c, ft_tolower(c));
	printf("o char [%c] tranformado por tolower fica: %c \n",c, tolower(c));
}*/

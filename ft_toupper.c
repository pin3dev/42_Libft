/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

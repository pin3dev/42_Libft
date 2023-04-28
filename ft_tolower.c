/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

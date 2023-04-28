/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	ret;
	int			sign;

	ret = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || \
*str == '\f' || *str == '\r' || *str == ' ')
		++str;
	if (*str && (*str == 43 || *str == 45))
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (sign * (*(str++) - '0'));
		if (ret > 2147483647)
			return (-1);
		if (ret < -2147483648)
			return (0);
	}
	return (ret);
}
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
    const char str[] = "+1583";

    printf("inteiro pela ft: %i \n", ft_atoi(str));
    printf("inteiro pela função: %i \n", atoi(str));
    
    const char str2[] = "-1583";

    printf("inteiro pela ft: %i \n", ft_atoi(str2));
    printf("inteiro pela função: %i \n", atoi(str2));
}*/
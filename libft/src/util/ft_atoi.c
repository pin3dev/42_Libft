/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to an integer.
 * 
 * This function converts the initial portion of the string `str` to an integer (`int`). 
 * It skips any leading whitespace characters and then processes an optional sign character 
 * (`+` or `-`). The function reads the digits from the string and forms the corresponding integer.
 * If the resulting value exceeds the range of an `int`, the function returns `-1` for overflow 
 * and `0` for underflow.
 * 
 * @param str The string to be converted to an integer.
 * 
 * @return The converted integer value. Returns `-1` if the value exceeds `INT_MAX` and `0` if 
 *         the value is below `INT_MIN`.
 */
int	ft_atoi(const char *str)
{
	long	ret;
	int		sign;

	ret = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		ret = ret * 10 + (*str++ - 48);
		if (ret * sign > 2147483647)
			return (-1);
		if (ret * sign < -2147483648)
			return (0);
	}
	return ((int)(ret * sign));
}

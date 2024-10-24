/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the absolute value of an integer.
 * 
 * This static helper function returns the absolute value of the integer `nbr`.
 * If `nbr` is negative, it returns `-nbr`. Otherwise, it returns `nbr`.
 * 
 * @param nbr The integer whose absolute value is to be calculated.
 * 
 * @return The absolute value of the integer `nbr`.
 */
static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

/**
 * @brief Calculates the number of characters needed to represent an integer.
 * 
 * This static helper function returns the length of the string that would represent the integer `nbr`, 
 * accounting for the sign if the number is negative.
 * 
 * @param nbr The integer whose length is to be calculated.
 * 
 * @return The length of the string representation of `nbr`.
 */
static int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

/**
 * @brief Converts an integer to a string.
 * 
 * This function converts the integer `n` to its string representation. It handles negative numbers
 * and returns a newly allocated string that represents the integer. If memory allocation fails,
 * the function returns `NULL`.
 * 
 * @param n The integer to be converted.
 * 
 * @return A pointer to the newly allocated string representing the integer `n`, or `NULL` if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[--len] = absolute_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}

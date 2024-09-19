/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 01:03:55 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Converts an uppercase character to lowercase.
 * 
 * This function converts the given character `c` to its lowercase equivalent if it is an uppercase
 * letter (A-Z). If the character is not an uppercase letter, it is returned unchanged.
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase equivalent of `c` if it is an uppercase letter, or `c` if it is not.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

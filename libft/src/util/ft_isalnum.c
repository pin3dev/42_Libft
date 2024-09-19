/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 01:00:17 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Checks if a character is alphanumeric.
 * 
 * This function checks whether the given character `c` is an alphanumeric character.
 * An alphanumeric character is defined as a digit (0-9) or a letter (a-z or A-Z).
 * 
 * @param c The character to be checked.
 * 
 * @return The function returns a non-zero value (2048) if `c` is alphanumeric, and 0 if it is not.
 */
int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (2048);
	return (0);
}

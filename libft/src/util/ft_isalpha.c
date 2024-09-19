/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 01:00:37 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Checks if a character is alphabetic.
 * 
 * This function checks whether the given character `c` is an alphabetic letter.
 * An alphabetic letter is defined as a lowercase letter (a-z) or an uppercase letter (A-Z).
 * 
 * @param c The character to be checked.
 * 
 * @return The function returns a non-zero value (1024) if `c` is an alphabetic letter, and 0 if it is not.
 */
int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1024);
	return (0);
}

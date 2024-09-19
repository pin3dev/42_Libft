/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 01:04:15 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Converts a lowercase character to uppercase.
 * 
 * This function converts the given character `c` to its uppercase equivalent if it is a lowercase
 * letter (a-z). If the character is not a lowercase letter, it is returned unchanged.
 * 
 * @param c The character to be converted.
 * 
 * @return The uppercase equivalent of `c` if it is a lowercase letter, or `c` if it is not.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/**
 * @brief Applies a function to each character of a string, passing its index.
 * 
 * This function iterates over the string `s` and applies the function `f` to each character,
 * passing both the index of the character and a pointer to it. The function `f` is applied
 * in order, starting from the first character of the string.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character, taking its index and a pointer to the character.
 * 
 * @note If either `s` or `f` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
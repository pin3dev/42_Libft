/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:55:27 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Locates a substring within a string, searching up to a specified length.
 * 
 * This function locates the first occurrence of the substring `little` in the string `big`, 
 * where no more than `len` characters are searched. Characters after `len` are not searched.
 * If `little` is an empty string, `big` is returned. If `little` does not occur in the first 
 * `len` characters of `big`, `NULL` is returned.
 * 
 * @param big The larger string to be searched.
 * @param little The substring to search for within `big`.
 * @param len The maximum number of characters to search in `big`.
 * 
 * @return A pointer to the first occurrence of `little` in `big` if found, or `NULL` if `little` is not found 
 *         within the first `len` characters of `big`.
 * 
 * @note If `little` is an empty string, the function returns `big`.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((len == 0 && !*little) || !*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j]
			&& (i + j) < len && little[j] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

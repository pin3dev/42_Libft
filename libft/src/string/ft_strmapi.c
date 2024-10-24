/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string to create a new string.
 * 
 * This function creates a new string by applying the function `f` to each character of the string `s`.
 * The function `f` takes as parameters the index of the character and the character itself. The result
 * of applying `f` to each character is stored in the new string, which is null-terminated.
 * 
 * @param s The input string to be transformed.
 * @param f The function to apply to each character of `s`, which takes the character's index and the character as arguments.
 * 
 * @return A pointer to the newly created string, or `NULL` if memory allocation fails or if `s` or `f` is `NULL`.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*here;

	i = 0;
	if (!s || !f)
		return (NULL);
	here = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (here == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		here[i] = f(i, s[i]);
		i++;
	}
	here[i] = '\0';
	return (here);
}

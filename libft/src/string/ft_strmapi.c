/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 22:58:52 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

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

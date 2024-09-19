/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 01:03:01 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Writes a string followed by a newline to a file descriptor.
 * 
 * This function writes the string `s` to the specified file descriptor `fd`, followed by a newline character.
 * 
 * @param s The string to be written.
 * @param fd The file descriptor where the string will be written. If `s` is `NULL` or `fd` is invalid (negative), the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

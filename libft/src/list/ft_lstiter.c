/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a linked list and applies a function to each element's content.
 * 
 * This function traverses the linked list and applies the provided function (`f`) to the content
 * of each element.
 * 
 * @param lst A pointer to the first element of the linked list.
 * @param f A function pointer that takes the content of the list element as an argument and performs an action.
 * 
 * @note If `lst` or `f` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;

	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

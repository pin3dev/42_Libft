/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element to the end of a linked list.
 * 
 * This function takes a pointer to the first element of the list (`lst`) and a new element (`new`).
 * If the list is empty, the new element becomes the first element. Otherwise, the new element
 * is added to the end of the list.
 * 
 * @param lst A pointer to the pointer to the first element of the linked list.
 * @param new The new element to be added at the end of the list.
 * 
 * @note If `lst` or `new` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!lst || !new)
		return;

	if (!*lst)
	{
		*lst = new;
		return;
	}

	cur = *lst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}

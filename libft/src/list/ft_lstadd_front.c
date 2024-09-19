/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:41:01 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Adds a new element at the beginning of a linked list.
 * 
 * This function takes a pointer to the first element of the list (`lst`) and a new element (`new`).
 * The new element is added at the front of the list, becoming the new head.
 * 
 * @param lst A pointer to the pointer to the first element of the linked list.
 * @param new The new element to be added at the beginning of the list.
 * 
 * @note If `lst` or `new` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;

	new->next = *lst;
	*lst = new;
}

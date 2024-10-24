/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Deletes and frees all elements of a linked list.
 * 
 * This function iterates through the entire linked list, applying the provided `del` function
 * to each element to free its content, and then freeing the element itself. After all elements 
 * are deleted, the list pointer is set to `NULL`.
 * 
 * @param lst A pointer to the pointer to the first element of the linked list.
 * @param del A function pointer used to delete the content of each element.
 * 
 * @note If `lst` or `del` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return;

	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

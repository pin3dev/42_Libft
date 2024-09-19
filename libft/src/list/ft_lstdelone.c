/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/19 00:42:02 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @brief Deletes a single element of a linked list.
 * 
 * This function takes a list element (`lst`) and a function pointer (`del`) to delete the content
 * of the element. After the content is deleted, the memory allocated for the element is freed.
 * 
 * @param lst A pointer to the list element to be deleted.
 * @param del A function pointer used to delete the content of the list element.
 * 
 * @note If `lst` or `del` is `NULL`, the function does nothing.
 * 
 * @return This function does not return any value.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;

	del(lst->content);
	free(lst);
}

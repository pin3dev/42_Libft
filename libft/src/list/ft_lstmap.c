/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/10/24 17:42:26 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears two linked lists using a delete function.
 * 
 * This static helper function clears two linked lists by freeing their contents using
 * the provided delete function (`del`).
 * 
 * @param lst A pointer to the pointer of the first list to clear.
 * @param new_lst A pointer to the pointer of the second list to clear.
 * @param del A function pointer used to delete the content of each element in the lists.
 * 
 * @return This function does not return any value.
 */
static	void	clear_both(t_list **lst, t_list **new_lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	ft_lstclear(new_lst, del);
}

/**
 * @brief Creates a new list by applying a function to each element of an existing list.
 * 
 * This function iterates over the list `lst` and applies the function `f` to the content
 * of each element. It creates a new list with the results of applying `f` to each element.
 * If an allocation fails during the process, the function clears both the remaining original
 * list and the new list using the delete function `del`.
 * 
 * @param lst A pointer to the first element of the linked list to be mapped.
 * @param f A function pointer to apply to the content of each element in the list.
 * @param del A function pointer to delete the content of elements in case of failure.
 * 
 * @return A pointer to the first element of the new list, or `NULL` if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_elem = ft_lstnew(f(lst->content));
	if (!new_elem)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			clear_both(&lst, &new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

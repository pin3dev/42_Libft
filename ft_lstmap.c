/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	clear_both(t_list **lst, t_list **new_lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	ft_lstclear(new_lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_elem = ft_lstnew(f(lst->content));
	if (new_elem == NULL)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (new_elem == NULL)
		{
			clear_both(&lst, &new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_elem);
	}
	return (new_lst);
}
/*
int	main()
{
	t_list *no1 = malloc(sizeof(t_list));
	t_list *no2 = malloc(sizeof(t_list));
	t_list *no3 = malloc(sizeof(t_list));
	t_list *no4 = malloc(sizeof(t_list));
	t_list *no5 = malloc(sizeof(t_list));
	
	no1->next = NULL;
	no2->next = NULL;
	no3->next = NULL;
	no4->next = NULL;
	no5->next = NULL;
	
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;
	
	no1->content = &a;
	no2->content = &b;
	no3->content = &c;
	no4->content = &d;
	no5->content = &e;
	
	no1->next = no2;
	no2->next = no3;
	no3->next = no4;
	no4->next = no5;
	
	printf("Lista Original:\n");
	t_list *current = no1;

	while(current != NULL)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	
	t_list *new_head = ft_lstmap(no1, change, del);
	
	printf("Lista Atualizada:\n");
	current = new_head;
	while(current != NULL)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
}*/
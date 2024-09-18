/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 12:18:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int        main()
{
    //Criação dos nós
    t_list *no1;
    no1 = malloc(sizeof(t_list));
    no1->next = NULL;
    no1->content = "primeiro";
    
    t_list *no2;
    no2 = malloc(sizeof(t_list));
    no2->next = NULL;
    no2->content = "segundo";
    
    t_list *no_novo;
    no_novo = malloc(sizeof(t_list));
    no_novo->next = NULL;
    no_novo->content = "novo";
    
    // Criação da lista encadeada
    t_list *head = no1;
    no1->next = no2;

    // Impressão do conteúdo da lista original
    printf("Lista original:\n");
    t_list *i = head; 
    while(i != 0)
    {
      printf("%s\n",(char*) i->content);
      i = i->next;
    }

    ft_lstadd_front(&head, no_novo);
    
    // Adição de um novo nó no início da lista
    printf("Lista original:\n");
    i = head; 
    while(i != 0)
    {
      printf("%s\n", (char*) i->content);
      i = i->next;
    }
}*/

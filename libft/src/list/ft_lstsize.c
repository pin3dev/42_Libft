/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ivbatist          #+#    #+#             */
/*   Updated: 2024/09/18 12:18:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int        main()
{
    //Criação dos nós
    t_list *no1;
    no1 = malloc(sizeof(t_list));
    no1->next = NULL;
    no1->content = "Primeiro";
    
    t_list *no2;
    no2 = malloc(sizeof(t_list));
    no2->next = NULL;
    no2->content = "Segundo";
    
    t_list *no3;
    no3 = malloc(sizeof(t_list));
    no3->next = NULL;
    no3->content = "Terceiro";
    
    // Criação da lista encadeada
    no1->next = no2;
    no2->next = no3;
    
    // Impressão do size
    int size = 0;
    size = ft_lstsize(no1);
    printf("Size: %d\n", size);
}*/
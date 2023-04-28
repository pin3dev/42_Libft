/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by ivbatist          #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void    del(void *content)
{
    free(content);
}
int main()
{
    // Criação dos nós
    t_list *no1 = malloc(sizeof(t_list));
    no1->next = NULL;
    no1->content = malloc(sizeof(int));
    *(int *)(no1->content) = 10;

    t_list *no2 = malloc(sizeof(t_list));
    no2->next = NULL;
    no2->content = malloc(sizeof(int));
    *(int *)(no2->content) = 20;

    t_list *no3 = malloc(sizeof(t_list));
    no3->next = NULL;
    no3->content = malloc(sizeof(int));
    *(int *)(no3->content) = 30;

    // Criação da lista encadeada
    no1->next = no2;
    no2->next = no3;

    // Impressão do conteúdo da lista original
    printf("Lista original:\n");
    t_list *current = no1;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    // Liberação da memória do primeiro nó da lista
    ft_lstdelone(no1, del);

    // Impressão do conteúdo da lista atualizada
    printf("Lista atualizada:\n");
    current = no2;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }
    return (0);
}*/
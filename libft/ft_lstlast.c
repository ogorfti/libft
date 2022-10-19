/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:00:47 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/19 20:25:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list *node;
	t_list *head = 0;
	node = malloc(sizeof(t_list));
	node->next = NULL;
	node->content = "test";

    
	ft_lstadd_front(&head, node);
	printf("%d\n", (int )head);
	printf("add last : %d\n", (int )ft_lstlast(head));

	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;	
	}
}
*/
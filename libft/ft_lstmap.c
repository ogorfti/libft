/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:47:08 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/21 14:55:05 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content)
{
	free(content);
}

void *f(void *content)
{
	content = "xxxx";
	printf("%s\n", content);
	return(content);

}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	current = 0;
	new = 0;
	while (lst != NULL)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&current, del);
			return (0);
		}
		ft_lstadd_back(&new, current);
		lst = lst->next;
	}
	return (new);
}
/*
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *head;
	
	node1 = malloc(sizeof(t_list));
	node1 ->content = "test1";
	node1 ->next = NULL;

	node2 = malloc(sizeof(t_list));
	node2 ->content = "test2";
	node2 ->next = NULL;
	
	head = node1;
	node1 -> next = node2;
	ft_lstmap(head, f, del);
	

}
*/

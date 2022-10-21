/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:01:36 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/21 14:53:44 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
	t_list *n1;
	t_list *n2;
	t_list *head;

	n1 = ft_lstnew(ft_strdup("test1"));
	n2 = ft_lstnew(ft_strdup("test2"));
	n1->next = n2;
	head = n1;

	ft_lstdelone(n1, del);
	while (head != NULL)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/
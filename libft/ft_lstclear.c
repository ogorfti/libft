/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:30:19 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/21 14:52:42 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content)
{
	free(content);
}
*/
//*tmp = *lst erreur ???????!!1
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp ->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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
while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	ft_lstclear(&head, del);
	
}
*/
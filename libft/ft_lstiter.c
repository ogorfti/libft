/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:47 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/19 20:25:30 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void f(void *content)
{
	content = "xxxx";
	printf("%s\n", content);
	
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main()
{
	t_list *n1;
	t_list *n2;
	t_list *head;

	n1 = ft_lstnew("test1");
	n2 = ft_lstnew("test2");

	n1->next = n2;
	head = n1;
	ft_lstiter(head,f);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
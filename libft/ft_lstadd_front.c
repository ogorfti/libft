/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:54:05 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/18 14:46:55 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *lst;
	 lst = ft_lstnew("test");

	t_list *new;
	new = ft_lstnew("hgj");

	ft_lstadd_front(&lst, new);
	while (lst)
	{
		printf("%d\n", (int )lst->next);
		lst = lst->next;
	}
}*/
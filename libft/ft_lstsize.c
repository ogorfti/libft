/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:50:15 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/19 20:26:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int main()
{
	t_list *old;
	t_list *new;

	
	new = ft_lstnew("test1");
	old = ft_lstnew("test2");
	ft_lstadd_front(&old, new);
	while (old)
	{
		printf("%s\n", old->content);
		old = old->next;
	}
	printf("size node :%d\n", ft_lstsize(new));
}
*/
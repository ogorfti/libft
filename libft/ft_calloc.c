/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:10:59 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/09 13:32:47 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	if(count >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr,count*size);	
		return (ptr);
	}
	return (0);
}
/*
int main()
{
	size_t sc = 4;
	size_t ss = 4;
	printf("mine : %s\n", ft_calloc(sc, ss));
	printf("original : %s\n", calloc(sc, ss));
}*/

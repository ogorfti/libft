/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:50:35 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 21:36:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i ;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}
/*
int main()
{
	char s[50] = "oussama gorfti";
	printf("\nBefore memset(): %s\n", s);
	ft_memset(s, '*', 4);
	printf("\n my ft_memset: %s\n", s);
}
*/
/*
unsigned char *rpl = b;
	unsigned char carac = c; 

	int i = 0;
	while (len > 0)
	{
		rpl[i] = carac;
		i++;
		len--;
	}
	return (rpl);*/
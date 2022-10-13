/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:43:11 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 22:09:18 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cnv_s;

	i = 0;
	cnv_s = (unsigned char *)s;
	while (i < n)
	{
		if (cnv_s[i] == (unsigned char)c)
		{
			return (&cnv_s[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s[10] = "gfx";
	char c = 'f';
	printf("%s|\n", memchr(s,c,0));
	printf("%s|\n", ft_memchr(s,c,0));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:14:45 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/06 16:25:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strlcat() function appends the 
//NUL-terminated string src to the end of dst. 
//It will append at most size - strlen(dst) - 1 bytes,
// NUL-terminating the result.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;
	if(!dstsize)
	return (0);
	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	j = len_d;
	if (dstsize == 0 || dstsize <= len_d)
		return (len_s + dstsize);
	
	while (src[i] != '\0' && i < dstsize - len_d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}

	dst[j] = '\0';
	return (len_d + len_s);
}
/*
int main()
{
	char d[50] = "hfgh";
	char s[50] = "oussama";
	printf("%lu\n", ft_strlcat(d, s, 8));
	printf("%lu\n", strlcat(d, s, 8));
}*/
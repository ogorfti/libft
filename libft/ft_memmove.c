/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:58:41 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 22:10:39 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cnv_dst;
	const char	*cnv_src;

	cnv_src = src;
	cnv_dst = dst;
	if (cnv_dst > cnv_src)
	{
		while (len)
		{
			cnv_dst[len - 1] = cnv_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(cnv_dst, cnv_src, len);
	return (cnv_dst);
}

/*
	while (len)
	{
		cnv_dst[len - 1] = cnv_src[len - 1];
		if (len == 0)
			break ;
		len--;
	}
	return (cnv_dst);
*/
/*
int main()
{
	char s[10] = "abcdefj";
	printf("%s\n", ft_memmove((s), s+2, 3));
	printf("%s\n", s);
	char s2[10] = "abcdefj";
	printf("original : %s \n", memmove(s2, s2 +2, 3));
	printf("%s\n", s2);
}*/
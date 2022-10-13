/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:42:01 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 22:09:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cnv_d;
	char	*cnv_s;

	cnv_d = dst;
	cnv_s = (void *)src;
	i = 0;
	if (cnv_d == NULL && cnv_s == NULL)
		return (NULL);
	while (i < n)
	{
		cnv_d[i] = cnv_s[i];
		i++;
	}
	return (cnv_d);
}

/*
int main()
{
	char s[10] = "kyg";
	char d[10] = "kyg";
	
	printf("%s|\n", ft_memcpy(d,s,0));
	printf("%s|\n", memcpy(d,s,0));
}*/
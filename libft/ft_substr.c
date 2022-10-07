/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:19:23 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/06 15:41:18 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *cnv_s;
	char *cnv_d;
	char *fornull;
	unsigned int i;

	i = 0;
	cnv_s = (char *)s;
	if(!s)
	return (0);
	cnv_d = (char *)malloc(len + 1);

	if (!cnv_d)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		fornull = malloc(1);
		return (fornull);
	}
	while (len > 0 && cnv_d)
	{
		cnv_d[i] = cnv_s[start];
		i++;
		start++;
		len--;
	}
	cnv_d[i] = '\0';
	return (cnv_d);
}
/*
int main()
{
	char src[] = "Oussamagfx";

	int s = 8;
	int l = 5;

	printf("%s\n", ft_substr(src, s, l));
	//printf("%s\n", substr(src, s, l));

	return 0;
}*/
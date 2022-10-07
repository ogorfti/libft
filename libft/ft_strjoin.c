/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:35:39 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/06 15:40:48 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	size_t len_s1;
	size_t len_s2;

	if(!s1 || !s2)
	return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc(len_s2 + len_s1 + 1);
	if (res)
	{
		ft_memcpy(res, s1, len_s1);
		ft_memcpy(res + len_s1, s2, len_s2 + 1);
	}

	return (res);
}
/*
int main()
{
	char s1[] = "oussama";
	char s2[] = "mazino";
	//printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", strjoin(s1, s2));
}
*/
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	char	*cnv_s1;
	char	*cnv_s2;
	int	i;
	int	j;
	int	k;
	int len = ft_strlen(cnv_s1);

	cnv_s1 = (char *)s1;
	cnv_s2 = (char *)s2;
	i = 0;
	j = 0;
	k = 0;
	r = (char *)malloc(ft_strlen(cnv_s1) + ft_strlen(cnv_s2) + 1);
	while (cnv_s1[i])
	{
		r[k] = cnv_s1[i];
		k++;
		i++;
	}
	while (cnv_s2[j])
	{
		r[len + 1] = cnv_s2[j];
		j++;
		len++;
	}
	r[len] = '\0';
	return(r);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:04:17 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/06 16:21:43 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ctr_str;

	i = 0;
	j = 0;
	ctr_str = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (!len)
		return (0);
	while (haystack[i] != '\0' && needle[j] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			ctr_str++;
		}
		i++;
	}
	if (ft_strlen(needle) == ctr_str)
		return ((char *)&haystack[i - ft_strlen(needle)]);
	return (NULL);
}
/*
int main()
{
	char haystack[30] = "abcdefj";
	char needle[30] = "ef";
	size_t x = 5;
	//printf("%lu", x);
	printf("%s\n", ft_strnstr(haystack, needle, 0));
	printf("%s\n", strnstr(haystack, needle, 0));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:04:17 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 22:21:08 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	saver;

	i = 0;
	j = 0;
	saver = 0;
	if (len == 0 && (char *)haystack == NULL)
		return (0);
	while (haystack[i] && needle [j] && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
		{
			j = 0;
			i = 0 + saver;
			saver++;
		}
			i++;
	}
	if (ft_strlen(needle) == j)
		return ((char *)&haystack[i - ft_strlen(needle)]);
	return (NULL);
}
/*
int main()
{
	char haystack[50] = "lorem ipsum dolor sit amet";
	char needle[8] = "ipsum";
	//printf("%lu", x);
	printf("%s\n", ft_strnstr(haystack, needle, 30));
	printf("%s\n", strnstr(haystack, needle, 30));
}*/
/*
int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s\n", strnstr(haystack, needle, -1));
}*/
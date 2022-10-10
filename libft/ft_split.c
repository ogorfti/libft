/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:56:45 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/10 19:18:08 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_str(char const *str, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && (i == 0 || str[i - 1] == sep))
			count++;
		i++;
	}
	return (count);
}

char **ft_split(char const *str, char sep)
{
	size_t i;
	size_t j;
	size_t k;
	size_t start;
	size_t end;

	size_t len_s;
	size_t len;
	char **result;


	if(!str)
	return (0);
	int counter = 0;

	len = count_str(str, sep);
	result = malloc(sizeof(char *) * len + 1);
	if (!result)
		return (0);

	i = 0;
	j = 0;
	start = 0;
	end = 0;
	k = 0;
	len_s = count_str(str, sep);
	while (k < len_s)
	{
		while (str[i])
		{
			if (str[i] != sep)
			{
				start = i;
				break;
			}
			i++;
		}
		end = start;
		j = start;
		while (str[j])
		{
			if (str[j] != sep)
				end++;
			else
				break;
			j++;
		}
		i = end;
		result[counter] = ft_substr(str, start, (end - start));
		counter++;
		k++;
	}
	result[counter] = 0;
	return (result);
}

// /*
// int main()
// {
// 	char c = ' ';
// 	char s[100] = "       ab as ab   ghjjgh  ab os ks ls         ";
// 	char **sc = ft_split(s, c);
// 	int i = 0;
// 	while(i < count_str(s,c))
// 	{
// 		printf("%s\n",sc[i]);
// 		i++;
// 	}
// 	return(0);
// }*/
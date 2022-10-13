/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:56:45 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 21:52:31 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *str, char sep)
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

static int	get_first_pos(char *str, char sep, int end)
{
	size_t start;
	size_t i;

	i = 0;
	start = end;
	while (str[i] == sep)
	{
		start++;
		i++;
	}
	return (start);
}

static int	get_last_pos(char *str, char sep, int start)
{
	size_t i;
	size_t end;

	i = 0;
	end = start;
	while (str[i] != sep && str[i])
	{
		end++;
		i++;
	}
	return (end);
}

char	**ft_split(char const *str, char sep)
{
	char	*s = (char *)str;
	int		i;
	int		start;
	int		end;
	int		counter;
	char	**result;

	if (!s)
		return (0);
	result = malloc(sizeof(char *) * count_str(s, sep) + 1);
	if (!result)
		return (0);
	counter = 0;
	start = 0;
	end = 0;
	i = 0;
	while (i < count_str(s, sep))
	{
		start = get_first_pos(s + end, sep, end);
		end = get_last_pos(s + start, sep, start);
		result[counter] = ft_substr(s, start, (end - start));
		counter++;
		i++;
		//exit (EXIT_SUCCESS);
		//exit (EXIT_FAILURE);
	}
	result[counter] = NULL;
	
	return (result);
}
/*
int main()
{
	char c = ' ';
	char s[100] = "  ab  cfjb bhbv hv  ";
	char **sc = ft_split(s, c);
	int i = 0;
	while (i < count_str(s, c))
	{
		printf(": %s\n", sc[i]);
		i++;
	}
	return (0);
}
*/
// char **ft_split(char const *str, char sep)
// {
// 	size_t i;
// 	size_t j;
// 	size_t k;
// 	size_t start;
// 	size_t end;

// 	size_t len_s;
// 	size_t len;
// 	char **result;

// 	if (!str)
// 		return (0);
// 	int counter = 0;

// 	len = count_str(str, sep);
// 	result = malloc(sizeof(char *) * len + 1);
// 	if (!result)
// 		return (0);

// 	i = 0;
// 	j = 0;
// 	start = 0;
// 	end = 0;
// 	k = 0;
// 	len_s = count_str(str, sep);
// 	while (k < len_s)
// 	{
// 		while (str[i])
// 		{
// 			if (str[i] != sep)
// 			{
// 				start = i;
// 				break;
// 			}
// 			i++;
// 		}
// 		end = start;
// 		j = start;
// 		while (str[j])
// 		{
// 			if (str[j] != sep)
// 				end++;
// 			else
// 				break;
// 			j++;
// 		}
// 		i = end;
// 		result[counter] = ft_substr(str, start, (end - start));
// 		counter++;
// 		k++;
// 	}
// 	result[counter] = 0;
// 	return (result);
// }
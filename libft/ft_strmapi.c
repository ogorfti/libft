/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:42:35 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/14 10:30:32 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char f(unsigned int n, char c)
{
	if(n == 5)
	write(1,"x",1);
	elsewrite(1, &c, 1);
	return 0;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tar;

	i = 0;
	tar = NULL;
	if (s)
		tar = ft_strdup(s);
	if (tar)
	{
		while (tar[i])
		{
			tar[i] = f(i, tar[i]);
			i++;
		}
	}
	return (tar);
}
/*
int main()
{
	char *s = "hello world";
	ft_strmapi(s,f);
	return (0);
}*/
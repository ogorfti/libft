/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:59:37 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 21:37:26 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char )c)
	{
		if (s[i] == '\0')
		{
			return (0);
		}		
		i++;
	}
	return ((char *)&s[i]);
}
/*
int main()
{
	char *s = "tripouille";
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", strchr(s, 'o'));
}*/
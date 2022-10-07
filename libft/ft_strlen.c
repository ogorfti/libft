/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:35:53 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/06 09:58:45 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
/*
int main()
{
	char *s = "ouss  amaa  ";
	printf ("%zu\n", ft_strlen(s));
	printf ("%lu\n", strlen(s));
}*/
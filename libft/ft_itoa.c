/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:36:28 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/08 20:02:25 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char ft_putchar(char c)
{
	write(1, &c, 1);
}*/

static int get_len(int value)
{
	int len;

	len = 0;
	while (value)
	{
		value = value / 10;
		len++;
	}
	return (len);
}

char *cnv_n(int n)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(get_len(n) + 1);
	if (n >= 0 && n <= 9)
	{
		str[i] = n + '0';
		i++;
		//printf("%d\n", i);
	}
	else if(n > 9)
	{
		cnv_n(n / 10);
		cnv_n(n % 10);
	}
	str[i] = '\0';
	return (str);
}
/*
char *ft_itoa(int n)
{
	char *s;
	int i;

	i = 0;
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	else if(n > 9)
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}*/

int main()
{
	int n = 13;
	printf("%s\n", cnv_n(n));
}
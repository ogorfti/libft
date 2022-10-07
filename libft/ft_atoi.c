/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:01:42 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/05 15:47:18 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void ft_putchar(char c)
{
	write (1, &c, 1);
}*/

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;
	//char *str;

	i = 0;
	r = 0;
	s = 1;
	//str = (char *)str1;
	//if (*str == LONG_MAX)
	while ((str[i] >= 9 && str [i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * (-1);
			i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		/*if (r * s > 2147483647)
		return (-1);
		else if (r * s < -2147483648)
		return (0);
		*/
		r = r * 10;
		r = r + str[i] - 48;
		i++;
	}
	return (s * r);
}
/*
int main()
{
	printf("%d\n", ft_atoi("-2147483649"));
	printf("%d\n", atoi("-2147483649"));
}*/
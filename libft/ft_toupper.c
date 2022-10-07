/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:37:01 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 21:47:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The toupper() function converts a lower-case letter
//to the corresponding upper-case letter

int	ft_toupper(int c)
{
	unsigned char	x;

	x = c;
	if (x >= 'a' && x <= 'z')
	{
		x = x - 32;
	}
	return (x);
}
/*
int main()
{
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", toupper('A'));
}*/
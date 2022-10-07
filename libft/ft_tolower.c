/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:52:41 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 21:45:35 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//upper case to lower case letter conversion

int	ft_tolower(int c)
{
	unsigned char	x;

	x = c;
	if (x >= 'A' && x <= 'Z')
		x = x + 32;
	return (x);
}
/*
int main()
{
	printf("%c\n", ft_tolower('O'));
	printf("%c\n", tolower('O'));
}*/
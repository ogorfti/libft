/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:49 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/13 22:15:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}	
	}	
}
/*
int main(void)
{
	char s[] = "hello world";
	s[0] = 'x';
	ft_striteri(s, f);
	return (0);
}
*/
// void add(int a, int b)
// {
// 		printf("%d\n", a + b);
// }

// void sus(int a, int b)
// {
// 		printf("%d\n", a - b);
// }

// void myFunction(int a, int b ,void (*f)(int, int))
// {

// 		f(a, b);

// }
// int main(void)
// {
// 	myFunction(1,2,add);
// 	return (0);
// }
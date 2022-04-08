/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:40:16 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/06 22:40:18 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	if (n > 0 || !n)
		ft_putchar('P');
}
/* 
int main ()
{
	int n;
	ft_is_negative(n);
} */
/* Create a function that displays ’N’ or ’P’ 
depending on the integer’s sign entered
as a parameter. If n is negative,
 display ’N’. If n is positive or null, display ’P */’
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:55:15 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/13 10:59:39 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0 || nb > 12)
		return (0);
	num = 1;
	while (nb >= 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
/* 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	int i;
	i = 3;

	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(i));
	ft_putchar('\n');

	return (EXIT_SUCCESS);
}
 */
/* Create an iterated function
 that returns a number.
  This number is the result of a
factorial operation 階乗演算based on the number 
given as a parameter.
• If there’s an error,
 the function should return 0. */

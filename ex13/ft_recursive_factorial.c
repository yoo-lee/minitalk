/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:08:07 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/13 17:35:13 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	num;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	num = nb * ft_recursive_factorial(nb - 1);
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
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
}

int	main(void)
{
	int i;

	i = 6;
	ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(i));
		ft_putchar('\n');
	return (EXIT_SUCCESS);
} */
/* • Create a recursive function that returns the
 factorial of the number given as a
parameter.
• If there’s an error, the function should return 0.
• Here’s how it should be prototyped :
int ft_recursive_factorial(int nb); */
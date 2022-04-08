/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:47:01 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/06 22:47:20 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = a;
	a = b;
	b = a;
}
/* Create a function that swaps 
the value of two integers whose 
addresses are entered
as parameters. */
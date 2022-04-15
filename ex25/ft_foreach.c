/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:07:22 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 18:05:18 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i]);
	i++;
}
/* Create the function ft_foreach which, 
for a given ints array, applies a function on
all elements of the array.
 This function will be applied following the array’s order.
• Here’s how the function should be prototyped : */
/* For example, the function ft_foreach 
could be called as follows in order to display
all ints of the array :
ft_foreach(tab, 1337, &ft_putnbr); */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:24:37 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/12 19:30:22 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
/* • Create a function ft_count_if 
which will return the number of elements 
of the array that return 1,
 passed to the function f.
• Here’s how the function 
should be prototyped :
int ft_count_if(char **tab, int(*f)(char*));
• The array will be delimited by 0. */
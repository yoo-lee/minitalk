/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:51:42 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 18:51:42 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0 && nb < 2147483647)
	{
		while (i <= (nb / 2 + 1))
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

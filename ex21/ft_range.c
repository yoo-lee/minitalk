/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:57:41 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 18:58:15 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	char	*array;

	if (min >= max)
		return (0);
	array = malloc(sizeof(int *) * (max - min));
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:17:40 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/13 15:22:47 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i++];
	}
	return (i);
}
/* 
int　main()
{
 char a[4];
 int n;

 a[0] = 'a';
 a[1] = 'b';
 a[2] = 'c';
 a[3] = '\0';

 printf("%s\n", a);

 n = ft_strlen(&a);

 printf("%d\n", n);

 return 0;
} */

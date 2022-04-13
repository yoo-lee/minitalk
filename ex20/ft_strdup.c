/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:34:37 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/13 17:35:01 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*newsrc;
	unsigned int	i;

	while (src[i])
		i++;
	newsrc = (void *)malloc(sizeof(*src) * (i + 1));
	if (!newsrc)
		return (NULL);
	i = 0;
	while (src[i])
	{
		newsrc[i] = src[i];
		i++;
	}
	newsrc[i] = '\0';
	return (newsrc);
}
/* 
int main ()
{
	char *str1 = "fdaoi";
	char *str2 = NULL;
	str2 = ft_strdup(str1);
	printf("%s", str2);	
}  */
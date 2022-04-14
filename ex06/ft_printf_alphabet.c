/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_alphabet.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:18:43 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/14 18:03:18 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

void	ft_print_alphabet(void)
{
	char	str;

	str = 'a';
	while (str <= 'z')
	{
		ft_putchar(str);
		str++;
	}
}
/* 
int		main(void)
{
	ft_print_alphabet();
} */
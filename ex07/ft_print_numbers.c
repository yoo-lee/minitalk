/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:35:11 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 11:53:56 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
//why isnt possible without "" just only number?
/* 
//writeの第二引数は文字列しか渡せないので、
int型の値を出力すると、それに対応したASCII文字がNULL文字を検出するまで出力されてしまうので、
int型の数値を文字列に変換してから出力します。
int main()
{
	ft_print_numbers();
	return 0;
} */

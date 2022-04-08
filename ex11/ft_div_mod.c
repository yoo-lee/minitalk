/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:50:49 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/06 22:50:56 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	div = a/b;
	mod = a%b;
}
/* 
This function divides parameters a by b and stores 
the result in the int pointed by
div. It also stores the remainder 
of the division of a by b 
in the int pointed by mod. */
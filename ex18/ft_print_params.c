/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:35:12 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 11:31:31 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:52:47 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/15 11:48:18 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024

int	zp_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	zp_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		zp_putchar(str[i]);
		i++;
	}
}

void	display(char *filename)
{
	int		fd;
	int		d;
	char	buffer[2];

	fd = open(filename, O_RDONLY);
	d = read(fd, buffer, 1);
	while (d)
	{
		buffer[d] = '\0';
		zp_putstr(buffer);
	}
	if (close(fd) < 0)
		return ;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	display(argv[1]);
	return (0);
}

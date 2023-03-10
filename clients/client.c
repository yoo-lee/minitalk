/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:22:12 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/17 10:36:35 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

void	decimal_conversion(char ascii, int power, int pid)
{
	if (power > 0)
		decimal_conversion(ascii / 2, power - 1, pid);
	if ((ascii % 2) == 1)
	{
		if (kill(pid, SIGUSR1) == -1)
		{
			ft_putstr("Error signal!\n");
			exit(0);
		}
	}
	else
	{
		if (kill(pid, SIGUSR2) == -1)
		{
			ft_putstr("Error signal!\n");
			exit(0);
		}
	}
	usleep(100);
}

int	send_message(int server_pid, char *msg)
{
	int		i;

	i = 0;
	while (msg[i] != '\0')
	{
		decimal_conversion(msg[i], 7, server_pid);
		i++;
	}
	return (0);
}

void	my_handler(int signum, siginfo_t *siginfo, void *unused)
{
	(void)unused;
	(void)siginfo;
	(void)signum;
	ft_putstr("Signal received\n");
}

int	main(int argc, char **argv)
{
	struct sigaction	send;

	send.sa_flags = SA_SIGINFO;
	send.sa_sigaction = my_handler;
	if ((sigaction(SIGUSR2, &send, 0)) == -1)
		error("Error sigaction\n");
	if (argc == 3)
		send_message(atoi(argv[1]), argv[2]);
	else
		error("Error arg\n");
	while (1)
		pause();
	return (0);
}

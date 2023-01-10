/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:23:35 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/17 10:23:40 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	sig_to_str(int bin)
{
	char	c;
	int		i;

	i = 0;
	c = '\0';
	c += (bin << i++);
	if (i > 7)
	{
		if (c == '\0')
			ft_putchar('\n');
		else
			ft_putchar(c);
		c = 0;
		i = 0;
	}
}

void	my_handler(int signum, siginfo_t *siginfo, void *unused)
{
	static int	ascii = 0;
	static int	power = 0;

	(void)unused;
	if (signum == SIGUSR1)
		ascii += 1 << (7 - power);
	power += 1;
	if (power == 8)
	{
		ft_putchar(ascii);
		power = 0;
		ascii = 0;
		if (kill(siginfo->si_pid, SIGUSR2) == -1)
			error("Error signal\n");
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	catch;

	(void)argv;
	if (argc != 1)
		error("Error arguments\n");
	write(1, "Server started!\nPID: ", 21);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = my_handler;
	if ((sigaction(SIGUSR1, &catch, 0)) == -1)
		error("Error sigaction\n");
	if ((sigaction(SIGUSR2, &catch, 0)) == -1)
		error("Error sigaction\n");
	while (1)
		pause();
	return (0);
}
// You must create a communication program 
// in the form of a client and a server.

// • The server must be started first.
//  After its launch, it has to print its PID.
// 
// • The client takes two parameters:
// ◦ The server PID.
// ◦ The string to send.
// • The client must send the string passed as a parameter to the server.
// Once the string has been received, the server must print it.
// • The server has to display the string pretty quickly. Quickly means that if you think
// it takes too long, then it is probably too long.
// 1 second for displaying 100 characters is way too much!
// • Your server should be able to receive strings from several clients in a row without
// needing to restart.
// • The communication between your client and your server has to be done only using
// UNIX signals.
// • You can only use these two signals: SIGUSR1 and SIGUSR2.
// Linux system does NOT queue signals when you already have pending
// signals of this type! Bonus time?

// Bonus list:
// • The server acknowledges every message received by sending back a signal to the
// client.
// • Unicode characters support!

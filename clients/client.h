/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:26:57 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/17 10:27:01 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	error(char *str);
void	decimal_conversion(char ascii, int power, int pid);
int		send_message(int server_pid, char *msg);
void	my_handler(int signum, siginfo_t *siginfo, void *unused);

#endif
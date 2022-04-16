# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/16 15:33:08 by yoo-lee           #+#    #+#              #
#    Updated: 2022/04/16 15:37:03 by yoo-lee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAFS = -Wall -Werror -Wextra
SRC =	ft_display_file.c
HD = ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

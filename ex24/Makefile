# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 18:09:47 by yoo-lee           #+#    #+#              #
#    Updated: 2022/04/12 18:09:49 by yoo-lee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ =	$(SRC:%.c = %.o)

DIR = ./srcs/
HEADER = ./includes/*.h

GCC = gcc  
FLAGS = -Wall -Werror -Wextra
RM = rm -f

all		:	$(NAME)
$(NAME)	:	$(OBJS)	
	ar rc $(NAME) $(OBJ)
$(OBJS)	:	$(SRCS)
	$(GCC) $(FLAGS) $(SRCS)
clean	:	$(OBJ)
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
	$(RM) includes/*.*.gch
re		:　fclean all
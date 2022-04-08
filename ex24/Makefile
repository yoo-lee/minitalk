NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ =	$(S_SRC:%.c = %.o)

DIR = ./srcs/
HEADER = ./includes/*.h

GCC = gcc -Wall -Werror -Wextra 
RM = rm -f

all		:	$(NAME)
$(NAME)	:	$(OBJS)	
	ar rc $(NAME) $(OBJ)
$(OBJS)	:	$(SRCS)
	$(GCC) $(SRCS)
clean	:	$(OBJ)
	$(RM)	$(OBJ)
fclean 	:	$(NAME) $(OBJ)
	$(RM)	$(OBJ) 
re		:
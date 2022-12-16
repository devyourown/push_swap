# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 12:09:17 by hyojulee          #+#    #+#              #
#    Updated: 2022/12/16 20:31:48 by hyojulee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
GCC = cc -Wall -Wextra -Werror

HELPER_DIR	=	./domain/helper
ARG_DIR		=	./domain/argument

SRCS = main.c domain/stack.c $(HELPER_DIR)/ft_memmove.c $(HELPER_DIR)/ft_split.c \
		$(HELPER_DIR)/ft_strdup.c	$(HELPER_DIR)/ft_strjoin_with_space.c \
		$(HELPER_DIR)/ft_strlen.c	$(ARG_DIR)/organize.c	$(ARG_DIR)/validator.c \
		$(HELPER_DIR)/ft_atol.c		$(HELPER_DIR)/size.c $(HELPER_DIR)/ft_atoi.c
OBJS = $(SRCS:.c=.o)
all : $(NAME)

.c.o : $(SRCS)
	$(GCC) -c $^ -o $@

$(NAME) : $(OBJS)
	$(GCC) -o $@ $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all clean fclean re

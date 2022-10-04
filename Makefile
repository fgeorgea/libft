# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2022/10/04 11:41:45 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c # attention aux wildcards

INCS = libft.h

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

RM = rm -f

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean

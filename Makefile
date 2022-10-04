# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2022/10/04 19:35:24 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c\
	   ft_bzero.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_strchr.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strrchr.c\
	   ft_strnstr.c\
	   ft_strlen.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_memset.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_calloc.c\
	   ft_strtrim.c\
	   ft_split.c\

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

RM = rm -f

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean

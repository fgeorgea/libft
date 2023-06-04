# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2023/06/04 19:40:00 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a

SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strchr.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strlen.c \
				ft_nbrlen.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strdup.c \
	   			ft_substr.c \
	  			ft_strjoin.c \
	   			ft_memset.c \
	   			ft_memcpy.c \
	   			ft_memmove.c \
	 	 		ft_strncmp.c \
	  	 		ft_memchr.c \
	   			ft_calloc.c \
	   			ft_strtrim.c \
	   			ft_split.c \
	   			ft_split_charset.c \
	   			ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
   	   			ft_putchar_fd.c \
   	   			ft_putstr_fd.c \
   	   			ft_putendl_fd.c \
   	   			ft_putnbr_fd.c \
	   			ft_memcmp.c \
	   			ft_strmapi.c \
	   			ft_striteri.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_printf.c \
				ft_printf_utils.c \
				ft_printnbr.c \
				get_next_line.c \
				ft_free.c \
				ft_var_free.c \
				ft_strcspn.c \
				ft_strspn.c \
				ft_strrev.c \
				ft_realloc.c \
				ft_ispunct.c \
				ft_isspace.c \
				ft_isxdigit.c \
				ft_iscntrl.c \
				ft_fabs.c \
				ft_abs.c \
				ft_ceil.c \
				ft_floor.c \
				ft_pow.c \
				ft_sqrt.c \
				ft_isprime.c \
				ft_factorial.c \
				ft_strdup_reject.c \
				ft_arraylen.c \
				array_rev.c \
				array_add.c \
				array_del.c \
				array_replace.c \
				array_get_value.c \

OBJS		 = 	$(SRCS:.c=.o)

CFLAGS		 =	-Wall -Wextra -Werror

CC			 =	@gcc

RM			 =	@rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclean norm

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2023/06/13 17:30:29 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
MATH		=	math/
ARRAY		=	array/
CHAR		=	char/
INT			=	int/
DISPLAY		=	display/
LIST		=	list/
STRING		=	string/
MEMORY		=	memory/
VARIADICS	=	variadics/

SRCS		=	$(STRING)ft_atoi.c \
				$(STRING)ft_strlcpy.c \
				$(STRING)ft_strlcat.c \
				$(STRING)ft_strdup.c \
	   			$(STRING)ft_substr.c \
	  			$(STRING)ft_strjoin.c \
				$(STRING)ft_strchr.c \
				$(STRING)ft_strrchr.c \
				$(STRING)ft_strnstr.c \
				$(STRING)ft_strlen.c \
	 	 		$(STRING)ft_strncmp.c \
	   			$(STRING)ft_strtrim.c \
	   			$(STRING)ft_strmapi.c \
	   			$(STRING)ft_striteri.c \
				$(STRING)ft_strcspn.c \
				$(STRING)ft_strspn.c \
				$(STRING)ft_strrev.c \
				$(STRING)ft_strdup_reject.c \
	   			$(STRING)ft_itoa.c \
				$(CHAR)ft_isalnum.c \
				$(CHAR)ft_isalpha.c \
				$(CHAR)ft_isdigit.c \
				$(CHAR)ft_isascii.c \
				$(CHAR)ft_isprint.c \
				$(CHAR)ft_toupper.c \
				$(CHAR)ft_tolower.c \
				$(CHAR)ft_ispunct.c \
				$(CHAR)ft_isspace.c \
				$(CHAR)ft_isxdigit.c \
				$(CHAR)ft_iscntrl.c \
				$(INT)ft_nbrlen.c \
				$(MEMORY)ft_bzero.c \
	   			$(MEMORY)ft_memset.c \
	   			$(MEMORY)ft_memcpy.c \
	   			$(MEMORY)ft_memmove.c \
	  	 		$(MEMORY)ft_memchr.c \
	   			$(MEMORY)ft_calloc.c \
	   			$(MEMORY)ft_memcmp.c \
				$(MEMORY)ft_free.c \
				$(MEMORY)ft_realloc.c \
				$(MEMORY)ft_var_free.c \
				$(DISPLAY)ft_putchar.c \
				$(DISPLAY)ft_putstr.c \
				$(DISPLAY)ft_putendl.c \
				$(DISPLAY)ft_putnbr.c \
   	   			$(DISPLAY)ft_putchar_fd.c \
   	   			$(DISPLAY)ft_putstr_fd.c \
   	   			$(DISPLAY)ft_putendl_fd.c \
   	   			$(DISPLAY)ft_putnbr_fd.c \
				$(DISPLAY)ft_printf.c \
				$(DISPLAY)ft_printf_utils.c \
				$(DISPLAY)ft_printnbr.c \
				$(DISPLAY)get_next_line.c \
				$(LIST)ft_lstnew.c \
				$(LIST)ft_lstadd_front.c \
				$(LIST)ft_lstsize.c \
				$(LIST)ft_lstlast.c \
				$(LIST)ft_lstadd_back.c \
				$(LIST)ft_lstdelone.c \
				$(LIST)ft_lstclear.c \
				$(LIST)ft_lstiter.c \
				$(LIST)ft_lstmap.c \
				$(MATH)ft_fabs.c \
				$(MATH)ft_abs.c \
				$(MATH)ft_ceil.c \
				$(MATH)ft_floor.c \
				$(MATH)ft_pow.c \
				$(MATH)ft_sqrt.c \
				$(MATH)ft_isprime.c \
				$(MATH)ft_factorial.c \
				$(ARRAY)ft_arraylen.c \
				$(ARRAY)ft_array_rev.c \
				$(ARRAY)ft_array_add.c \
				$(ARRAY)ft_array_del.c \
				$(ARRAY)ft_array_replace.c \
				$(ARRAY)ft_array_get_value.c \
	   			$(ARRAY)ft_split.c \
	   			$(ARRAY)ft_split_charset.c \
				$(ARRAY)ft_arraydup.c \
				$(VARIADICS)ft_close.c \

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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2023/06/26 02:16:25 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
MATH		=	math/
ARRAY		=	array/
CHAR		=	char/
DISPLAY		=	display/
LIST		=	list/
STRING		=	string/
MEMORY		=	memory/
VARIADICS	=	variadics/

SRCS		=	$(CHAR)ft_isalnum.c \
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
				$(STRING)ft_atoi.c \
				$(STRING)ft_strlcpy.c \
				$(STRING)ft_strlcat.c \
				$(STRING)ft_strdup.c \
				$(STRING)ft_strndup.c \
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
	   			$(STRING)ft_strcmp_strict.c \
	   			$(STRING)ft_strtok.c \
	   			$(STRING)ft_strcmp.c \
	   			$(STRING)ft_strpbrk.c \
				$(STRING)ft_perror.c \
				$(STRING)ft_strerror.c \
				$(STRING)ft_strerror2.c \
				$(STRING)ft_strerror3.c \
				$(STRING)ft_bzero.c \
	   			$(STRING)ft_memcpy.c \
	   			$(STRING)ft_memset.c \
	  	 		$(STRING)ft_memchr.c \
	   			$(STRING)ft_memmove.c \
	   			$(STRING)ft_memcmp.c \
	   			$(STRING)ft_calloc.c \
	   			$(STRING)ft_strstr.c \
	   			$(STRING)ft_strcpy.c \
	   			$(STRING)ft_strncpy.c \
	   			$(STRING)ft_strreplace.c \
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
				$(MATH)ft_nbrlen.c \
				$(MATH)ft_fabs.c \
				$(MATH)ft_abs.c \
				$(MATH)ft_ceil.c \
				$(MATH)ft_floor.c \
				$(MATH)ft_pow.c \
				$(MATH)ft_sqrt.c \
				$(MATH)ft_isprime.c \
				$(MATH)ft_factorial.c \
				$(MATH)ft_rad_to_deg.c \
				$(MATH)ft_deg_to_rad.c \
				$(ARRAY)ft_arraylen.c \
				$(ARRAY)ft_array_rev.c \
				$(ARRAY)ft_array_add.c \
				$(ARRAY)ft_array_del.c \
				$(ARRAY)ft_array_replace.c \
				$(ARRAY)ft_array_get_value.c \
	   			$(ARRAY)ft_split.c \
	   			$(ARRAY)ft_split_charset.c \
				$(ARRAY)ft_arraydup.c \
				$(VARIADICS)ft_close_var.c \

OBJS		 = 	$(SRCS:.c=.o)

CFLAGS		 =	-Wall -Wextra -Werror

RM			 =	rm -f

.c.o:
	gcc $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean

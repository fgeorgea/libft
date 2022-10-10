# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:47:36 by fgeorgea          #+#    #+#              #
#    Updated: 2022/10/10 15:56:07 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a

SRCS		=	ft_atoi.c\
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
	   			ft_itoa.c\
   	   			ft_putchar_fd.c\
   	   			ft_putstr_fd.c\
   	   			ft_putendl_fd.c\
   	   			ft_putnbr_fd.c\
	   			ft_memcmp.c\
	   			ft_strmapi.c\
	   			ft_striteri.c\
	   
SRCS_BONUS 	= 	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\

OBJS		 = 	$(SRCS:.c=.o)

OBJS_BONUS	 =	$(SRCS_BONUS:.c=.o)

CFLAGS		 =	-Wall -Wextra -Werror

CC			 =	gcc

RM			 =	rm -f

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
	@ar -rc $(NAME) $(OBJS)

bonus: 		$(OBJS_BONUS)
	@ar -rc $(NAME) $(OBJS_BONUS)

clean: 
	@$(RM) $(OBJS) $(OBJS_BONUS)

fclean: 	clean
	@$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclean bonus

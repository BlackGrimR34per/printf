# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 21:33:21 by yosherau          #+#    #+#              #
#    Updated: 2024/11/14 22:24:59 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_printf.c
OBJS		=	$(SRCS:.c=.o)

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

LIBFT_DIR	=	./libft
LIBFT		=	$(LIBFT_DIR)/libft.a

all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJS)
				cp $(LIBFT) .
				ar x libft.a
				ar rcs $(NAME) $(OBJS) *.o
				$(RM) libft.a
				$(RM) *.o

$(LIBFT):
				$(MAKE) -C $(LIBFT_DIR)

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIBFT_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBFT_DIR) fclean

re:				fclean $(NAME)

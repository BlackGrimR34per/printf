# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:33:22 by yosherau          #+#    #+#              #
#    Updated: 2025/03/11 15:30:27 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:				all clean fclean re $(NAME)

NAME	=			libsrcs.a

SRCS	=			ft_itoa.c ft_nbrlen.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c \
					ft_putstr.c ft_putunbr.c ft_strlen.c ft_uitoa_base.c ft_unbrlen.c

OBJS_DIR	=		objs

OBJS	=			$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

CC		=			cc
CFLAGS	=			-Wall -Wextra -Werror

RM		=			rm -rf

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o :	%.c
					mkdir -p $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

clean:
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)
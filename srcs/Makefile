# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:33:22 by yosherau          #+#    #+#              #
#    Updated: 2024/12/16 10:44:23 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re $(NAME)

NAME	=	libsrcs.a

SRCS	=	ft_itoa_base.c ft_itoa.c ft_putaddress.c ft_putchar.c ft_puthex.c \
			ft_putnbr.c ft_putstr.c ft_strlen.c ft_putposnbr.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
			$(CC) $(CFLAGS) -c $^

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:33:22 by yosherau          #+#    #+#              #
#    Updated: 2025/01/30 18:15:31 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all clean fclean re $(NAME)

NAME	=	libsrcs.a

SRCS	=	ft_itoa.c ft_nbrlen.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c \
			ft_putstr.c ft_putunbr.c ft_strlen.c ft_uitoa_base.c ft_unbrlen.c

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
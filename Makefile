# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 18:13:12 by yosherau          #+#    #+#              #
#    Updated: 2025/01/30 18:12:06 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:			all clean fclean re $(NAME)

NAME		=	libftprintf.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

SRCS		=	ft_printf.c

LIBSRCS_DIR	=	./srcs
LIBSRCS		=	$(LIBSRCS_DIR)/libsrcs.a

OBJS		=	$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBSRCS)
				cp $(LIBSRCS) .
				ar -x libsrcs.a
				ar rcs $(NAME) $(OBJS) *.o
				$(RM) libsrcs.a
				$(RM) *.o

$(LIBSRCS):
				$(MAKE) -C $(LIBSRCS_DIR)

$(OBJS):		$(SRCS)
				$(CC) $(CFLAGS) -c $^


clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIBSRCS_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBSRCS_DIR) fclean

re:				fclean all
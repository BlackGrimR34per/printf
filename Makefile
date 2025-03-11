# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 18:13:12 by yosherau          #+#    #+#              #
#    Updated: 2025/03/11 15:32:29 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:				all clean fclean re $(NAME)

NAME		=		libftprintf.a

CC			=		cc
CFLAGS		=		-Wall -Wextra -Werror

RM			=		rm -f

SRCS		=		ft_printf.c

LIBSRCS_DIR	=		./srcs

LIBSRCS		=		$(LIBSRCS_DIR)/libsrcs.a

OBJS_DIR	=		objs

OBJS		=		$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))

all:				$(NAME)

$(NAME):			$(OBJS) $(LIBSRCS)
					cp $(LIBSRCS) .
					ar -x libsrcs.a
					ar rcs $(NAME) $(OBJS) *.o
					$(RM) libsrcs.a
					$(RM) *.o

$(LIBSRCS):
					$(MAKE) -C $(LIBSRCS_DIR)

$(OBJS_DIR)/%.o:	%.c | $(OBJS_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:
					$(RM) -r $(OBJS_DIR)
					$(MAKE) -C $(LIBSRCS_DIR) clean

fclean:				clean
					$(RM) $(NAME)
					$(MAKE) -C $(LIBSRCS_DIR) fclean

re:					fclean all
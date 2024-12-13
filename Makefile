# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 17:02:00 by kharuya           #+#    #+#              #
#    Updated: 2024/12/08 01:01:21 by kharuya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= cc
FLAGS	= -Wall -Wextra -Werror
LIBFT	= ./libft/libft.a
SRCS	= ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_d.c ft_printf_p.c ft_printf_u.c ft_printf_x.c
OBJS	= $(SRCS:.c=.o)
RM		= rm -f

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	make fclean -C libft
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 16:18:31 by ooulmoud          #+#    #+#              #
#    Updated: 2024/06/28 20:16:01 by ooulmoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

files_c = ft_atoi.c \
ft_split.c\
	lis.c \
	moves.c \
	push_to_a.c \
	push_to_b.c \
	retate_a.c \
	retate_ab.c \
	retate_b.c \
	retate_revers_a.c \
	retate_revers_ab.c \
	retate_revers_b.c \
	swap_value_in_a.c \
	swap_value_in_ab.c \
	swap_value_in_b.c \
	get_bestmove.c \
	make_themove.c \
	positive_move.c \
	negative_move.c \
	global_utils1.c \
	global_utils2.c \
	global_utils3.c \
	global_utils4.c \
	mix_move.c\
	main.c \
	main_utils1.c \
	main_utils2.c \
	main_utils3.c \
	lis_util1.c \
	lis_util2.c \
	parcing.c

files_o = $(files_c:.c=.o)

all: $(NAME)

$(NAME): $(files_o)
	$(CC) $(CFLAGS) $(files_o) -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(files_o)

fclean:
	rm -f $(files_o) $(NAME)

re: fclean all



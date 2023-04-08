# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 20:21:53 by abdel-ou          #+#    #+#              #
#    Updated: 2023/04/04 17:35:49 by abdel-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = check_error.c check_if_sorted.c fil_stack.c nurmal_sort.c push_fun.c push_swap.c rotation_fun.c sort_3.c sort_5.c sort_100.c sort_500.c sort_last.c swap_fun.c

CC = cc

FLAGS = -Wall -Werror -Wextra

LIBFT = libft

OBJ = $(SRC:.c=.o)


$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	@$(CC) $(OBJ) $(FLAGS) libft/libft.a -o $(NAME)


%.o:%.c
	$(CC) $(FLAGS) -c $^ -o $@

all : $(NAME)


fclean:
	@make fclean -C $(LIBFT)
	@rm -rf $(NAME) $(OBJ)

clean:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJ)

re:fclean all 
	
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/14 19:12:33 by gpaul             #+#    #+#              #
#    Updated: 2020/07/15 18:19:57 by gpaul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PARAMS = -Wall -Wextra -Werror 

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OUTPUT = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

INCLUDES = includes/ft.h

all : $(NAME)

$(NAME) :
	gcc $(PARAMS) $(INCLUDES) -c $(SRCS)
	mv ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o srcs
	ar rc $(NAME) $(OUTPUT)

clean : all
	rm -rf $(OUTPUT)

fclean : clean
	rm -rf $(NAME)

re : fclean all

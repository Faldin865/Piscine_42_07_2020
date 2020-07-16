# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/14 19:12:33 by gpaul             #+#    #+#              #
#    Updated: 2020/07/16 13:52:07 by gpaul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

D_OBJS = srcs

D_HEADER = includes

OBJS := ${patsubst %.c, ${D_OBJS}/%.o, ${SRCS}}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all :		${NAME}

${NAME} :	${OBJS}
	ar rc ${NAME} ${OBJS}
clean :
		rm -f ${OBJS}

fclean :	clean
		rm -f ${NAME}

re :		fclean all

${D_OBJS}/%.o : ${D_OBJS}/%.c
	${CC} ${CFLAGS} -I${D_HEADER} -c $< -o $@

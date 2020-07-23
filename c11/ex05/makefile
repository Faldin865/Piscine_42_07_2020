# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/19 11:00:04 by gpaul             #+#    #+#              #
#    Updated: 2020/07/19 12:39:15 by gpaul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/ft_atoi.c srcs/calc.c srcs/ft_print.c srcs/main.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

.c.o = ${CC} ${CFLAGS} -I ft.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

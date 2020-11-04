# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 11:34:37 by seonhong          #+#    #+#              #
#    Updated: 2020/11/01 20:11:17 by wonjlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./main.c ./hash.c ./find.c ./malloc.c ./read.c ./string.c ./is_error.c ./search.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= Rush_02
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette */*.[ch]

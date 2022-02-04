# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:49:16 by cboutier          #+#    #+#              #
#    Updated: 2022/01/10 16:26:50 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \
				Fixed.cpp Point.cpp bsp.cpp \

INCLUDES	= -Iincl

HEADER		=	Fixed.hpp Point.hpp

NAME		=	bsp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		${NAME}

.cpp.o:
			${CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${CC} ${CFLAGS} ${OBJS} ${INCLUDES} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
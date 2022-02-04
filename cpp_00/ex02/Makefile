# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 15:45:06 by cboutier          #+#    #+#              #
#    Updated: 2022/01/03 15:48:00 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	tests.cpp \
				Account.cpp \
				
HEADER		=	Account.hpp

NAME		=	account

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			${CC} ${CFLAGS} ${OBJS} -I ${HEADER} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
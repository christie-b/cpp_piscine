# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:49:16 by cboutier          #+#    #+#              #
#    Updated: 2022/01/05 16:50:33 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \

NAME		=	replace

OBJS		= ${SRCS:.cpp=.o}

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		${NAME}

.cpp.o:
			${CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
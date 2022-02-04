# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:09:42 by cboutier          #+#    #+#              #
#    Updated: 2022/01/03 11:15:56 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= megaphone.cpp

NAME		= megaphone

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
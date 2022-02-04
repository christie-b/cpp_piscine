# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:31:19 by cboutier          #+#    #+#              #
#    Updated: 2022/01/04 10:07:35 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	Contact.cpp \
				PhoneBook.cpp \
				main.cpp

INCLUDES	= -Iincl

HEADER		= Contact.hpp PhoneBook.hpp

NAME		=	phonebook

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			${CC} ${CFLAGS} ${OBJS} ${INCLUDES} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
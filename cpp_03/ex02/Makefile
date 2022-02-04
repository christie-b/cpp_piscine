# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:49:16 by cboutier          #+#    #+#              #
#    Updated: 2022/01/12 13:14:38 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \
				ClapTrap.cpp ScavTrap.cpp FragTrap.cpp \

INCLUDES	= -Iincl

HEADER		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

NAME		=	fragtrap

OBJS		= ${SRCS:.cpp=.o}

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		${NAME}

.cpp.o:
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${CC} ${CFLAGS} ${OBJS} ${INCLUDES} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
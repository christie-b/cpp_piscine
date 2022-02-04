# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:49:16 by cboutier          #+#    #+#              #
#    Updated: 2022/01/20 11:07:24 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= bureaucrat

SRCS_DIR		= .
INCLUDES		= .
OBJS_DIR		= objs

CXX				= c++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
DEP_FLAGS		= -MMD -MP

SRCS			= main.cpp \
				Bureaucrat.cpp

OBJS			= $(addprefix ${OBJS_DIR}/,${SRCS:.cpp=.o})

DEP				= ${OBJS:.o=.d}

RM				= rm -f

all:			${NAME}

$(NAME):		${OBJS}
				${CXX} -I${INCLUDES} ${CXXFLAGS} ${DEP_FLAGS} ${OBJS} -o $@

${OBJS_DIR}/%.o:${SRCS_DIR}/%.cpp
				@mkdir -p ${@D}
				${CXX} ${CXXFLAGS} ${DEP_FLAGS} -c $< -o $@

clean:
				rm -rf ${OBJS_DIR}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re

-include ${DEP}

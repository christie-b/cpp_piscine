# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboutier <cboutier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:49:16 by cboutier          #+#    #+#              #
#    Updated: 2022/01/17 16:05:45 by cboutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= materia

SRCS_DIR		= srcs
OBJS_DIR		= objs
HEADERS_DIR		= incl

CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3

SRCS			= AMateria.cpp Character.cpp \
				Cure.cpp Ice.cpp \
				MateriaSource.cpp

MAIN			= main.cpp

OBJS			= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o)) $(MAIN)

RM				= rm -f
RMDIR			= rm -rf
MKDIR			= mkdir -p

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) -I $(HEADERS_DIR) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADERS_DIR)
				@$(MKDIR) $(dir $@)
				$(CXX) $(CXXFLAGS) -I $(HEADERS_DIR) -o $@ -c $<

clean:
				$(RMDIR) $(OBJS_DIR)


fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

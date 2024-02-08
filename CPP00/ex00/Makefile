# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 12:44:08 by pcazac            #+#    #+#              #
#    Updated: 2024/02/08 13:45:10 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= Megaphone

CXX= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= Megaphone.cpp
OBJ			= $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o : %.c
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
	rm $(NAME)
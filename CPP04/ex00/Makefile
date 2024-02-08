# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:13:00 by pcazac            #+#    #+#              #
#    Updated: 2024/02/08 13:45:10 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= ex00

CXX= c++
CXXFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
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
		rm -f $(NAME)

re : fclean all
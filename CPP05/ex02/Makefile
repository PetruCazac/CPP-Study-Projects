# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:13:00 by pcazac            #+#    #+#              #
#    Updated: 2024/03/14 19:52:12 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= ex02

CXX= c++
CXXFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp\
				PresidentialPardonForm.cpp
OBJ			= $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	rm -f $(OBJ)

%.o : %.c
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
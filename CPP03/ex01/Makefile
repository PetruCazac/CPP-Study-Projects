# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:13:00 by pcazac            #+#    #+#              #
#    Updated: 2024/01/27 12:20:14 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= ex01

CC			= c++
CPPFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ			= $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o : %.c
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	rm $(OBJ)

fclean : clean
	rm $(NAME)

re : fclean all
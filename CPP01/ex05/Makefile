# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 23:54:39 by pcazac            #+#    #+#              #
#    Updated: 2024/01/22 23:44:18 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= Harl

CC			= c++
CPPFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp  Harl.cpp
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
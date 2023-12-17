# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 12:44:08 by pcazac            #+#    #+#              #
#    Updated: 2023/12/17 23:41:38 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 	= pPhonebook

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= Contact.cpp PhoneBook.cpp
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
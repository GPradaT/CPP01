# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 11:13:23 by gprada-t          #+#    #+#              #
#    Updated: 2024/07/14 11:31:55 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = references

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean:
	rm $(OBJS)
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
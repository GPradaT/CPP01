# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 14:03:19 by gprada-t          #+#    #+#              #
#    Updated: 2024/07/17 21:25:38 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SedIsForLosers

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

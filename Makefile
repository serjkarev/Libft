#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarev <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/29 19:54:50 by skarev            #+#    #+#              #
#    Updated: 2018/03/29 19:54:51 by skarev           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = libft.h
SOURCES = *.c
OBJECTS = *.o

$(NAME):
	gcc -c $(FLAGS) $(SOURCES) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

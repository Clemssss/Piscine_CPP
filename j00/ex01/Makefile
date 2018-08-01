# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/30 17:54:14 by clegirar          #+#    #+#              #
#    Updated: 2018/07/30 20:10:07 by clegirar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook

CC		=	g++
CPPFLAGS	=	-Wall -Wextra -Wno-unused -Werror

SRCS	=	srcs/main.cpp			\
				srcs/Add.class.cpp
OBJS	=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME) -I ./includes/

%.o: %.cpp
	  $(CC) $(CPPFLAGS) -o $@ -c $< -I ./includes/

clean	:
	rm -rf $(OBJS)

fclean	:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re		: fclean all

.PHONY	:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegirar <clegirar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/30 17:54:14 by clegirar          #+#    #+#              #
#    Updated: 2018/07/31 17:45:28 by clegirar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace

CC		=	g++
CPPFLAGS	=	-Wall -Wextra -Wno-unused -Werror

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	  $(CC) $(CPPFLAGS) -o $@ -c $<

clean	:
	rm -rf $(OBJS)

fclean	:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re		: fclean all

.PHONY	:	all clean fclean re

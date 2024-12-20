# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 15:10:58 by aerrfig           #+#    #+#              #
#    Updated: 2024/12/20 15:10:58 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = harlFilter
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = main.cpp Harl.cpp
heads = Harl.hpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(name)

%.o: %.cpp $(heads)
	$(CP) $(FLAGS) -c $< -o $@

$(name): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(name)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(name)

re: fclean all
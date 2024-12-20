# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 15:44:05 by aerrfig           #+#    #+#              #
#    Updated: 2024/12/15 15:44:07 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
heads = Zombie.hpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(name)

%.o: %.c $(heads)
	$(CP) $(FLAGS) -c $< -o $@

$(name): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(name)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(name)

re: fclean al
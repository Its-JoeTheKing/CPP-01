# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 15:51:06 by aerrfig           #+#    #+#              #
#    Updated: 2024/12/15 15:51:07 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Human
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
heads = Weapon.hpp HumanA.hpp HumanB.hpp
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
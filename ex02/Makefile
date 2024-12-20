# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 15:46:09 by aerrfig           #+#    #+#              #
#    Updated: 2024/12/15 15:46:10 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = ref
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = main.cpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(name)

%.o: %.cpp
	$(CP) $(FLAGS) -c $< -o $@

$(name): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(name)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(name)

re: fclean al
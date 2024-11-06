name = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = Zombie.cpp main.cpp zombieHorde.cpp
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
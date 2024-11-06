name = Harl
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = main.cpp Harl.cpp
heads = Harl.hpp
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

re: fclean all
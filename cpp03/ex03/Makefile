NAME = DiamondTrap

CLFAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CC = c++
RM = rm -f

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \

DEPENDENSES =	Makefile \
				ClapTrap.hpp \
				ScavTrap.hpp \
				FragTrap.hpp \
				DiamondTrap.hpp \

OBJ := $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CLFAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(DEPENDENSES)
	$(CC) $(CLFAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
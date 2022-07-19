NAME = violence

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRCS =	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp \

DEPENDENSES =	HumanA.hpp \
				HumanB.hpp \
				Weapon.hpp \
				Makefile \

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
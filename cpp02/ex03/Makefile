NAME = bsp

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRCS =	main.cpp \
		Fixed.cpp \
		bsp.cpp \
		Point.cpp \

DEPENDENSES =	Makefile \
				Fixed.hpp \
				Point.hpp \

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
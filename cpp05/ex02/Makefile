NAME = form

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentalPardonForm.cpp \

DEPENDENSES =	Makefile \
				Bureaucrat.hpp \
				Form.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentalPardonForm.hpp \

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
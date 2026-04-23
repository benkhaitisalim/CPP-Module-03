NAME = ClapTrap
CC = c++
FLAGS = -Wall -Wextra -Werror
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean : 
	rm -f $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all
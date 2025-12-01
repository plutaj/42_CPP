CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = phonebook

SRC = main.cpp \
newZombie.cpp \
randomChump.cpp \
Zombie.cpp

OBJ = $(SRC:.c=.o)

# EXEC = minishell

# Default target
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) $(LDFLAGS) -o $(EXEC)

# Compile .c files into .o files
%.o: %.c
	$(CXX) $(CFLAGS) -c -g $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJ)

cl:
	rm -f *.txt

# Remove everything (clean + remove executable)
fclean: clean
	rm -f $(EXEC)
	make -C $(LIBFT_DIR) fclean

# Rebuild everything
re: fclean all

phony: all clean fclean re
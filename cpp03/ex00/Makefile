NAME    = ClapTrap

CC      = c++

FLAGS   = -Wall -Wextra -Werror -std=c++98

RM      = rm -rf

SRC_DIR = src/

SRCS    = 	$(SRC_DIR)main.cpp \
			$(SRC_DIR)ClapTrap.cpp \

OBJ_DIR = obj

OBJ     = $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

.PHONY: all clean fclean re

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
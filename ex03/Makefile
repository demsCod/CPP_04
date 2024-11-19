NAME = Rpg
SRC = main.cpp Class/Code/AMateria.cpp  Class/Code/Cure.cpp Class/Code/Ice.cpp \
      Class/Code/Character.cpp Class/Code/ICharacter.cpp Class/Code/MateriaSource.cpp Class/Code/IMateriaSource.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./inc
OFLAG = -MMD -g3
OBJ_DIR = obj/
SRCS = $(SRC)
OBJ = $(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRCS))
DEP = $(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRCS))
MAKE_DIR = mkdir -p

all: $(NAME)

$(NAME): $(OBJ) $(DEP)
	@$(CC) $(CFLAGS) $(OFLAG) $(OBJ) -o $@

# Create object files
$(OBJ_DIR)%.o: %.cpp
	@$(MAKE_DIR) $(@D)
	@$(CC) $(CFLAGS) $(OFLAG) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR) $(DEP)
	@echo "\033[1;31m======== object files removed ========\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[1;31m======= executable removed =======\033[0m"

re: fclean all

.PHONY: clean fclean all re
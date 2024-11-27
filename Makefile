



# Programe name ************************************************************** #
NAME = libft.a

# SRC & OBJS Details ********************************************************* #
SRC = ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c \
      ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
      ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
      ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
      ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
      ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_lstnew_bonus.c \
      ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
      ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

# Compiler and Flags ******************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Test Files **************************************************************** #
TEST_DIR = tests
TEST_SRC = $(wildcard $(TEST_DIR)/test_*.c)
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_EXEC = tests_program

# Compile libft.a *********************************************************** #
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

# Build the library ********************************************************* #
all: $(NAME)

# Clean object files ******************************************************** #
clean:
	@rm -f $(OBJ) $(TEST_OBJ)
	@echo "Object files cleaned."

# Clean all files *********************************************************** #
fclean: clean
	@rm -f $(NAME) $(TEST_EXEC)
	@echo "Library $(NAME) and test executable cleaned."

# Rebuild everything ******************************************************** #
re: fclean all
re: fclean bonus

# Test the library ********************************************************** #
test: $(NAME)
	@echo "Buildng and running test..."
	$(CC) $(FLAGS) $(TEST_SRC) $(TEST_DIR)/main.c -L. -lft -o $(TEST_EXEC)
	./$(TEST_EXEC)

# Phony targets ************************************************************* #
.PHONY: all clean fclean re re_bonus bonus test

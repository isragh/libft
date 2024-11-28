# Programe name ************************************************************** #
NAME = libft.a

# SRC & OBJS Details ********************************************************* #
SRC = ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c \
      ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
      ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
      ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
      ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
      ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c
SRCBN = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
      ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
      ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJBN = $(SRCBN:.c=.o)

# Compiler and Flags ******************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Test Files **************************************************************** #
TEST_DIR = test
TEST_SRC = test/test_ft_isalpha.c test/test_ft_isdigit.c test/test_ft_isalnum.c \
           test/test_ft_isascii.c test/test_ft_isprint.c test/test_ft_strlen.c \
           test/test_ft_memset.c test/test_ft_bzero.c test/test_ft_memcpy.c \
           test/test_ft_memmove.c test/test_ft_strlcpy.c test/test_ft_strlcat.c \
           test/test_ft_toupper.c test/test_ft_tolower.c test/test_ft_strchr.c \
           test/test_ft_strrchr.c test/test_ft_strncmp.c test/test_ft_memchr.c \
           test/test_ft_memcmp.c test/test_ft_strnstr.c test/test_ft_atoi.c \
           test/test_ft_calloc.c test/test_ft_strdup.c test/test_ft_substr.c \
           test/test_ft_strjoin.c test/test_ft_strtrim.c test/test_ft_split.c \
           test/test_ft_itoa.c test/test_ft_strmapi.c test/test_ft_striteri.c \
           test/test_ft_putchar_fd.c test/test_ft_putstr_fd.c test/test_ft_putendl_fd.c \
           test/test_ft_putnbr_fd.c test/test_ft_lstnew.c test/test_ft_lstadd_front.c \
           test/test_ft_lstsize.c test/test_ft_lstlast.c test/test_ft_lstadd_back.c \
           test/test_ft_lstdelone.c test/test_ft_lstclear.c test/test_ft_lstiter.c \
           test/test_ft_lstmap.c
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_EXEC = tests_program

# Compile libft.a *********************************************************** #
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."
bonus: $(NAME) $(OBJBN)
	@ar rcs $(NAME) $(OBJBN)
	@echo "Bonus files added to $(NAME)."

# Build the library ********************************************************* #
all: $(NAME)

# Clean object files ******************************************************** #
clean:
	@rm -f $(OBJ) $(OBJBN) $(TEST_OBJ)
	@echo "Object files cleaned."

# Clean all files *********************************************************** #
fclean: clean
	@rm -f $(NAME) $(TEST_EXEC)
	@echo "Library $(NAME) and test executable cleaned."

# Rebuild everything ******************************************************** #
re: fclean all

# Test the library ********************************************************** #
test: $(NAME) bonus
	@echo "Buildng and running test..."
	$(CC) $(CFLAGS) $(TEST_SRC) $(TEST_DIR)/main.c -L. -lft -o $(TEST_EXEC)
	./$(TEST_EXEC)

# Phony targets ************************************************************* #
.PHONY: all clean fclean re re_bonus bonus test

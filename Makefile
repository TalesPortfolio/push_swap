NAME	= push_swap
SRC = src/index.c \
      src/push_swap.c \
      src/push.c \
      src/radix.c \
      src/reverse.c \
      src/rotate.c \
      src/swap.c \
      src/simple_sort.c \
      src/simple_sort_utils.c \
      src/lst_utils.c \
      utils/ft_atoi.c \
      utils/ft_atol.c \
      utils/ft_split.c \
      utils/ft_putstr_fd.c \
      utils/free_split.c \
      utils/ft_strlen.c


OBJS		= $(SRC:.c=.o)

# Compiler options
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

# Implicit rule for compiling .c to .o
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
# Rule to link the executable
$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

# Default rule
all: $(NAME)

# Rule for cleaning up
fclean:
	@$(RM) $(NAME) $(OBJS)

# Rule to re-make everything
re: fclean all
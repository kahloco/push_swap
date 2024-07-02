NAME 			= push_swap

LIBFT_DIR		= libft/
LIBFT			= $(LIBFT_DIR)libft.a
INC 			= inc/
SRC_DIR			= srcs/
OBJ_DIR 		= obj/

CC 				= gcc
CFLAGS			= -Wall -Werror -Wextra -I$(LIBFT_DIR) -I$(INC)
RM				= rm -rf

COMMANDS_SRC	= commands/push.c \
				  commands/rotate.c \
				  commands/swap.c \
				  commands/rev_rot.c \
				  commands/sort_stacks.c \
				  commands/sort_helpers.c \
				  commands/sort_three.c

PUSH_SWAP_SRC   = errors.c \
				  init_a_to_b.c \
				  init_b_to_a.c \
				  main.c \
				  split.c \
				  stack_init.c \
				  stack_utils.c 

SRCS			= $(addprefix $(SRC_DIR)/, $(COMMANDS_SRC) $(PUSH_SWAP_SRC))

OBJS			= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all: 			$(NAME)

$(NAME): 		$(OBJS) $(LIBFT)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft

$(OBJ_DIR)/%.o: 	$(SRC_DIR)/%.c
				mkdir -p $(@D)
				$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
				$(MAKE) -C $(LIBFT_DIR)

clean:
				$(RM) $(OBJ_DIR)
				$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBFT_DIR) fclean

re: 			fclean all

.PHONY: 		all clean fclean re

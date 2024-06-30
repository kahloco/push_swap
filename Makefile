NAME 			= push_swap

LIBFT_DIR		= libft/
INC 			= inc/
SRC_DIR			= srcs/
OBJ_DIR 		= obj/

CC 				= gcc
CFLAGS			= -Wall -Werror -Wextra -I$(LIBFT_DIR) -I$(INC)
RM				= rm -rf

COMMANDS_DIR	= $(SRC_DIR)commands/push.c \
				  $(SRC_DIR)commands/rotate.c \
				  $(SRC_DIR)commands/swap.c \
				  $(SRC_DIR)commands/rev_rot.c \
				  $(SRC_DIR)commands/sort_stacks.c \
				  $(SRC_DIR)commands/sort_three.c

PUSH_SWAP       = $(SRC_DIR)errors.c \
				  $(SRC_DIR)init_a_to_b.c \
				  $(SRC_DIR)init_b_to_a.c \
				  $(SRC_DIR)main.c \
				  $(SRC_DIR)split.c \
				  $(SRC_DIR)stack_init.c \
				  $(SRC_DIR)stack_utils.c \

SRCS			= $(COMMANDS_DIR) $(PUSH_SWAP)

OBJS			= $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

LIBFT			= $(LIBFT_DIR)libft.a
LIBFT_MAKE		= $(MAKE) -C $(LIBFT_DIR)

all: 			$(LIBFT) $(NAME)

$(NAME): 		$(OBJS) $(LIBFT)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft

$(OBJ_DIR)%.o: 	$(SRC_DIR)%.c
				mkdir -p $(@D)
				$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):		$(LIBFT_MAKE)

clean:
				$(RM) $(OBJ_DIR)
				$(LIBFT_MAKE) clean

fclean: 		
				$(RM) $(NAME)
				$(LIBFT_MAKE) fclean

re: 			fclean all

.PHONY: 		all clean fclean re
NAME 			= push_swap

LIBFT 			= ./libft/libft.a
INC 			= inc/
SRC 			= srcs/
OBJ 			= obj/

CC 				= gcc
CFLAGS			= -Wall -Werror -Wextra -I
RM 				= rm -f

COMMANDS_DIR	= $(SRC)commands/push.c \
				  $(SRC)commands/rotate.c \
				  $(SRC)commands/swap.c \
				  $(SRC)commands/rev_rot.c \
				  $(SRC)commands/sort_stacks.c \
				  $(SRC)commands/sort_three.c

PUSH_SWAP       = $(SRC)errors.c \
				  $(SRC)init_a_to_b.c \
				  $(SRC)init_b_to_a.c \
				  $(SRC)main.c \
				  $(SRC)split.c \
				  $(SRC)stack_init.c \
				  $(SRC)stack_utils.c \


SRC				= $(COMMANDS_DIR) $(PUSH_SWAP)

OBJ				= $(patsubst $(SRC)%.c, $(OBJ)%.o, $(SRC))

start:          @make all

$(LIBFT):		@make -C ./libft

all: $(NAME)

$(NAME): 		$(LIBFT) $(OBJ)
				@$(CC) $(CFLAGS) $(INC) -o $(NAME) $(OBJ) $(LIBFT)

$(OBJ)%.o:		$(SRC)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:			@$(RM) -r $(OBJ)
				@make clean -c ./libft

fclean: 		clean
				@$(RM) $(NAME)
				@$(RM) $(LIBFT)

re: fclean all

.PHONY: start all clean fclean re
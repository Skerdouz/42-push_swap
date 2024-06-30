EXECUTABLE	=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES	=	-Iinclude -Ilib/libft/include
LIBS		=	-Llib/libft -lft

#
#	COLORS
#
RESET = \033[0m
GREEN = \033[32;49m
RED = \033[31;49m
BLUE = \033[34;49m

#
# 	SRCS
#
SRC_DIR		=	src/
FILES		=	main

SRCS 	=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))

OBJS	=	$(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


all: comp

comp: $(OBJS)
	@make --no-print-directory -C lib/libft
	@echo "-------------------"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(EXECUTABLE)
	@printf "$(GREEN)[PUSH_SWAP]\texecutable compiled✨$(RESET)\n"

clean:
	@make --no-print-directory clean -C lib/libft
	@files_deleted=0; \
	for obj in $(OBJS); do \
		if [ -f "$$obj" ]; then \
			rm -f "$$obj"; \
			files_deleted=1; \
		fi; \
	done; \
	if [ $$files_deleted -eq 1 ]; then \
		printf "$(RED)[PUSH_SWAP]\tBinary files deleted🗑️$(RESET)\n"; \
	fi

fclean:	clean
	@make --no-print-directory fclean -C lib/libft
	@files_deleted=0; \
	if [ -f "$(EXECUTABLE)" ]; then \
		rm -f $(EXECUTABLE); \
		files_deleted=1; \
	fi; \
	if [ $$files_deleted -eq 1 ]; then \
		printf "$(RED)[PUSH_SWAP]\tExecutables cleaned🗑️$(RESET)\n"; \
	fi
	@printf "\n"

re:		fclean all

.PHONY: all clean fclean re

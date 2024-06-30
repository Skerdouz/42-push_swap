NAME =		libft.a
CC =		cc
AR =		ar rcs
CFLAGS =	-Wall -Wextra -Werror
INCLUDES =	-Iinclude

#
#	COLORS
#
RESET = \033[0m
GREEN = \033[32;49m
RED = \033[31;49m
BLUE = \033[34;49m

##########	SRCS	##########
SRC_DIR =	src/
#
#	MANDATORY & BONUS
#
BASE_DIR =	$(SRC_DIR)base/
BASE_FILES =	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha \
		ft_isascii ft_isdigit ft_isprint ft_itoa ft_memchr \
		ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd \
		ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_split \
		ft_strchr ft_strdup ft_striteri ft_strjoin \
		ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strnstr \
		ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper \
		ft_strncmp
BASE_FILES +=	ft_lstadd_back_bonus ft_lstadd_front_bonus \
		ft_lstclear_bonus ft_lstdelone_bonus ft_lstiter_bonus \
		ft_lstlast_bonus ft_lstmap_bonus ft_lstnew_bonus \
		ft_lstsize_bonus
SRCS =	$(addprefix $(BASE_DIR), $(addsuffix .c, $(BASE_FILES)))

#
#	GNL
#
GNL_DIR =	$(SRC_DIR)gnl/
GNL_FILES +=	get_next_line_bonus get_next_line_utils_bonus
SRCS +=	$(addprefix $(GNL_DIR), $(addsuffix .c, $(GNL_FILES)))

#
#	PRINTF
#
PRINTF_ARGS_DIR =	$(SRC_DIR)printf/
PRINTF_FILES	=	print_char print_hex print_nbr  print_percent \
				print_ptr print_str print_unbr ft_itoa ft_printf
SRCS +=	$(addprefix $(PRINTF_ARGS_DIR), $(addsuffix .c, $(PRINTF_FILES)))

OBJS	=	$(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


$(NAME):$(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "$(GREEN)[Libft]\tLibrary \"$(NAME)\" compiled✨$(RESET)\n"

all:	$(NAME)

clean:
	@files_deleted=0; \
	for obj in $(OBJS); do \
		if [ -f "$$obj" ]; then \
			rm -f "$$obj"; \
			files_deleted=1; \
		fi; \
	done; \
	if [ $$files_deleted -eq 1 ]; then \
		printf "$(RED)[Libft]\tBinary files deleted🗑️$(RESET)\n"; \
	fi

fclean:	clean
	@if [ -f "$(NAME)" ]; then \
		rm -f $(NAME); \
		printf "$(RED)[Libft]\tLibrary \"$(NAME)\" deleted🗑️$(RESET)\n"; \
	fi

re:		fclean all

.PHONY: all clean fclean re bonus
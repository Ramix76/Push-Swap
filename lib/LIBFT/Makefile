NAME = libft.a

SRCS = ft_isalpha.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_atoi.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strrchr.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strnstr.c ft_memchr.c \
	   ft_strnstr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c  ft_putnbr_fd.c \
	   ft_striteri.c ft_strmapi.c ft_split.c ft_itoa.c ft_putendl_fd.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c ft_lstadd_front_bonus.c 

OBJS = $(SRCS:%.c=%.o)

OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

# Colors
 
NO_COLOR   ┊=  ┊\033[0m
DEF_COLOR  ┊= \033[0;39m
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE			=	\033[0;97m

%.o: %.c
	@$(CC) $(CFLAGS) -I./ -c $< -o $@
	printf "\r🔧 $(GRAY)${CC} ${CFLAGS} -I./ -c $< -o $@$(DEF_COLOR)"

all:
	@echo "🎯 $(YELLOW)Starting $(WHITE)[${NAME}] $(YELLOW)compilation..$(DEF_COLOR)"
	@Make ${NAME}
	@echo "\n🔰 $(GREEN)${NAME} done!\n$(DEF_COLOR)"


$(NAME): $(OBJS) $(HEADER) Makefile
	@ar -crs $(NAME) $(OBJS)
	@echo "\n🔗 $(CYAN) ar -crs ${NAME} ${OBJS}$(DEF_COLOR)"

bonus:$(OBJS) $(OBJS_BONUS) $(HEADER) Makefile
	@ar -crs $(NAME) $(OBJS) $(OBJS_BONUS)
	@echo "\n🔗 $(CYAN) ar -crs ${NAME} $(OBJS_BONUS)$(DEF_COLOR)"

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) bonus
	@echo "$(MAGENTA)🚽 Mandatory and Bonus Cleaned ${NAME}$(DEF_COLOR)"

re: fclean
	$(MAKE)

.PHONY: all clean fclean re

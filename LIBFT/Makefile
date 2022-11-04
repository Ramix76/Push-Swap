NAME = libft.a

SRCS = ft_isalpha.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_atoi.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strrchr.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strnstr.c ft_memchr.c \
	   ft_strnstr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_striteri.c ft_strmapi.c ft_split.c ft_itoa.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:%.c=%.o)

OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar -crs $(NAME) $(OBJS)

bonus:$(OBJS) $(OBJS_BONUS) $(HEADER)
	ar -crs $(NAME) $(OBJS) $(OBJS_BONUS)
	@touch $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) bonus

re: fclean
	$(MAKE)

.PHONY: all clean fclean re

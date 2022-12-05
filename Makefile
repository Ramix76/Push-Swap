# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 16:46:08 by framos-p          #+#    #+#              #
#    Updated: 2022/12/05 17:26:23 by framos-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	push_swap
CHECKER				=	checker

MyLib_DIR			=	lib/LIBFT
MyLib				=	$(MyLib_DIR)/libft.a
MyPrintf_DIR		=	lib/Printf
MyPrintf			=	$(MyPrintf_DIR)/libftprintf.a

INC					=	inc/defines.h
INC_BONUS			=	inc/checker.h
SRCS				=	srcs/
SRCS_BONUS			=	srcs_bonus/

SRCS_FILES			=	$(SRCS)checks.c $(SRCS)main.c $(SRCS)init.c $(SRCS)utils.c $(SRCS)operations.c $(SRCS)short_sorts.c $(SRCS)smart_moves.c $(SRCS)long_sorts.c
SRCS_FILES_BONUS	=	$(SRCS_BONUS)checks.c $(SRCS_BONUS)init.c $(SRCS_BONUS)instructions.c $(SRCS_BONUS)main.c $(SRCS_BONUS)operations.c

CC					=	gcc
FLAGS				=	-g -Wall -Wextra -Werror
RM 					=	rm -rf
MK					=	Makefile

OBJS				=	$(SRCS_FILES:%.c=%.o)
OBJS_BONUS			=	$(SRCS_FILES_BONUS:%.c=%.o)

# Colors

NOCOLOR				=	\033[0m
BOLD_PURPLE			=	\033[1;35m
BOLD_CYAN			=	\033[1;36m
RED 				=	\033[0;91m
YELLOW 				=	\033[5;93m
BLUE 				=	\033[0;94m
GREEN				=	\033[0;32m

all:
					@$(MAKE) -sC $(MyLib_DIR)
					@$(MAKE) bonus -sC $(MyLib_DIR)
					@$(MAKE) -sC $(MyPrintf_DIR)
					@$(MAKE) $(NAME)

%.o: %.c			$(INC) $(MyLib) $(MyPrintf) $(INC_BONUS)
					@echo "$(BOLD_CYAN)compiling: [$(BOLD_PURPLE)]"
					@$(CC) $(FLAGS) -c $< -o $@

$(NAME)::			$(MyLib) $(MyPrintf) $(OBJS)
					@echo "\n$(YELLOW)Linking...$(GREEN)\n"
					@$(CC) $(FLAGS) $(MyLib) $(MyPrintf) $(OBJS) -o $(NAME)

$(NAME)::
					@echo "\n$(BLUE)PUSH_SWAP COMPILED! ✅$(DEF_COLOR)\n"

bonus::
					@$(MAKE) -sC $(MyLib_DIR)
					@$(MAKE) bonus -sC $(MyLib_DIR)
					@$(MAKE) -sC $(MyPrintf_DIR)
					@$(MAKE) $(CHECKER)

$(CHECKER)::		$(OBJS_BONUS) 
					@$(CC) $(CFLAGS) $(OBJS_BONUS) $(MyLib) -o $(CHECKER)
					@echo "$(BLUE)Compiling checker...$(END_COLOR)"

$(CHECKER)::
					@echo "$(GREEN)Checker is COMPILED!$(END_COLOR)"

clean:
					@${RM} $(OBJS) $(NAME)
					@$(RM) $(OBJS_BONUS) $(CHECKER)
					@make fclean -sC $(MyLib_DIR) 
					@make fclean -sC $(MyPrintf_DIR)
					@echo "\n✅$(YELLOW)Clean: $(RED)Removed Push_Swap.a \n$(NOCOLOR)"
					@echo "\n☑️ $(YELLOW)Clean: $(RED)Removed all the \".o\" files \n$(NOCOLOR)"

fclean: clean

re:	fclean all

.PHONY: all clean fclean re

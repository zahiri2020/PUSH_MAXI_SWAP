# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 02:41:00 by ezahiri           #+#    #+#              #
#    Updated: 2024/03/05 21:32:53 by ezahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc #-g -fsanitize=address
 
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker

SRCS =	MANDATORY/srcs/main.c \
		MANDATORY/srcs/big_sorted.c \
		MANDATORY/srcs/best_move.c \
		MANDATORY/srcs/sorted_3.c \
		MANDATORY/srcs/sorted_5.c \
		MANDATORY/opertion/push_a.c \
	   	MANDATORY/opertion/push_b.c \
	   	MANDATORY/opertion/ft_swap_a.c \
		MANDATORY/opertion/ft_swap_b.c \
		MANDATORY/opertion/rotate_a.c \
		MANDATORY/opertion/rotate_b.c \
		MANDATORY/opertion/rotate_a_b.c \
		MANDATORY/opertion/rev_rotate_a.c \
		MANDATORY/opertion/rev_rotate_b.c \
		MANDATORY/opertion/rev_rotate_a_b.c \
		MANDATORY/util/ft_atoi.c \
		MANDATORY/util/ft_split.c \
		MANDATORY/util/ft_strlen.c \
		MANDATORY/util/ft_strdup.c \
		MANDATORY/util/ft_strjoin.c\
		MANDATORY/util/ft_lstnew.c \
		MANDATORY/util/ft_lstadd_front.c \
		MANDATORY/util/ft_lstsize.c \
		MANDATORY/util/ft_lstlast.c \
		MANDATORY/util/ft_lstadd_back.c \
		MANDATORY/util/ft_lstclear.c \
		MANDATORY/util/ft_lst_beforelast.c \
		MANDATORY/util/ft_stack_new.c \
		MANDATORY/util/parsing.c \
		MANDATORY/util/is_sorted.c \
		MANDATORY/util/ft_exit.c \



BONUS_SRCS = BONUS/main_bonus.c \
			BONUS/checker_bonus.c \
			BONUS/ft_strcmp_bonus.c \
			BONUS/add_back_in_bonus.c\
			BONUS/clear_ins_bonus.c\
			BONUS/get_next_line/get_next_line_bonus.c \
			BONUS/get_next_line/get_next_line_utils_bonus.c \
			BONUS/opertion/push_a_bonus.c \
	   		BONUS/opertion/push_b_bonus.c \
	   		BONUS/opertion/ft_swap_a_bonus.c \
	   		BONUS/opertion/ft_swap_b_bonus.c \
	   		BONUS/opertion/ft_swap_a_b_bonus.c \
			BONUS/opertion/rotate_a_bonus.c \
			BONUS/opertion/rotate_b_bonus.c \
			BONUS/opertion/rotate_a_b_bonus.c \
			BONUS/opertion/rev_rotate_a_bonus.c \
			BONUS/opertion/rev_rotate_b_bonus.c \
			BONUS/opertion/rev_rotate_a_b_bonus.c \
			BONUS/util/ft_atoi_bonus.c \
			BONUS/util/ft_split_bonus.c \
			BONUS/util/ft_strlen_bonus.c \
			BONUS/util/ft_strdup_bonus.c \
			BONUS/util/ft_strjoin_bonus.c\
			BONUS/util/ft_lstnew_bonus.c \
			BONUS/util/ft_lstadd_front_bonus.c \
			BONUS/util/ft_lstsize_bonus.c \
			BONUS/util/ft_lstlast_bonus.c \
			BONUS/util/ft_lstadd_back_bonus.c \
			BONUS/util/ft_lstclear_bonus.c \
			BONUS/util/ft_lst_beforelast_bonus.c \
			BONUS/util/ft_stack_new_bonus.c \
			BONUS/util/parsing_bonus.c \
			BONUS/util/is_sorted_bonus.c \
			BONUS/util/ft_exit_bonus.c \
			
OBJ = $(SRCS:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

all: $(NAME)

bonus: $(NAME_BONUS)


$(NAME_BONUS) : $(BONUS_OBJ)
	@$(CC) -o $(NAME_BONUS) $(BONUS_OBJ)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)

MANDATORY/%.o: MANDATORY/%.c MANDATORY/push_swap.h 
	@$(CC) $(CFLAGS) -c $< -o $@

BONUS/%.o: BONUS/%.c BONUS/checker_bonus.h
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -f $(OBJ) $(BONUS_OBJ) $(UTILS_OBJ)
fclean: clean
	@rm -f $(NAME) $(NAME_BONUS) 
	
re: fclean all

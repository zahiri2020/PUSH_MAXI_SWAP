# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 02:41:00 by ezahiri           #+#    #+#              #
#    Updated: 2024/03/01 11:25:55 by ezahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc #-g -fsanitize=address
 
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker

SRCS =	MANDATORY/srcs/main.c \
		MANDATORY/srcs/big_sorted.c \
		MANDATORY/srcs/sorted_2.c \
		MANDATORY/srcs/sorted_3.c \
		MANDATORY/srcs/sorted_5.c \
		MANDATORY/srcs/sorted.c \
		MANDATORY/opertion/push_a.c \
	   	MANDATORY/opertion/push_b.c \
	   	MANDATORY/opertion/ft_swap_a.c \
		MANDATORY/opertion/ft_swap_b.c \
		MANDATORY/opertion/rotate_a.c \
		MANDATORY/opertion/rotate_b.c \
		MANDATORY/opertion/rotate_a_b.c \
		MANDATORY/opertion/rev_rotate_a.c \
		MANDATORY/opertion/rev_rotate_b.c \
		MANDATORY/opertion/rev_rotate_a_b.c 

UTILS = util/ft_atoi.c \
		util/ft_isdigit.c \
		util/ft_split.c \
		util/ft_strlen.c \
		util/ft_strdup.c \
		util/ft_strlcpy.c \
		util/ft_strjoin.c\
		util/ft_lstnew.c \
		util/ft_lstadd_front.c \
		util/ft_lstsize.c \
		util/ft_lstlast.c \
		util/ft_lstadd_back.c \
		util/ft_lstclear.c \
		util/ft_lst_beforelast.c \
		util/ft_stack_new.c \
		util/is_duplicate.c \
		util/parsing.c \
		util/is_sorted.c \
		util/ft_exit.c \
		util/memfree.c \
		
		
BONUS_SRCS = BONUS/main_bonus.c \
			BONUS/checker_bonus.c \
			BONUS/ft_strcmp.c \
			BONUS/add_back_ins.c\
			BONUS/clear_ins.c\
			BONUS/get_next_line/get_next_line.c \
			BONUS/get_next_line/get_next_line_utils.c \
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
		 
OBJ = $(SRCS:.c=.o)
		
UTILS_OBJ = $(UTILS:.c=.o)
		
BONUS_OBJ = $(BONUS_SRCS:.c=.o)

all: $(NAME) clean

bonus: $(NAME_BONUS) clean


$(NAME_BONUS) : $(BONUS_OBJ) $(UTILS_OBJ)
	@$(CC) -o $(NAME_BONUS) $(BONUS_OBJ) $(UTILS_OBJ)

$(NAME): $(OBJ) $(UTILS_OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(UTILS_OBJ)

MANDATORY/%.o: MANDATORY/%.c MANDATORY/push_swap.h 
	@$(CC) $(CFLAGS) -c $< -o $@

BONUS/%.o: BONUS/%.c BONUS/checker_bonus.h
	@$(CC) $(CFLAGS) -c $< -o $@
	
util/%.o: util/%.c util/ft_util.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(BONUS_OBJ) $(UTILS_OBJ)
fclean: clean
	@rm -f $(NAME) $(NAME_BONUS) 
	
re: fclean all


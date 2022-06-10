# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 23:35:17 by zessadqu          #+#    #+#              #
#    Updated: 2022/06/10 08:28:10 by zessadqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

FLAGS = -Wextra -Wall -Werror

SRCS = find_big.c \
	   b_sorte.c \
       lis.c rb.c \
	   sort_five.c \
	   find_smal.c \
	   pa.c \
	   rr.c	\
	   sort_med.c\
	   free_funcs.c \
	   pb.c \
	   rra.c\
	   sort_three.c\
	   pos_cal.c\
	   rrb.c\
	   sort_three_sol.c\
	   ft_atoi_plus.c\
	   rrr.c\
	   ss.c\
	   check_sort.c\
	   ft_split.c\
	   push_swap.c\
	   sa.c\
	   total_b.c\
	   duplicate_check.c\
	   funct_helper.c\
	   ra.c\
	   sb.c\
	   one_to_five.c\
	   lis_helper.c\
	   sort_med_helper.c
	   
B_SRCS = pa.c \
	   bonus/rb.c\
	   bonus/rr.c	\
	   bonus/free_funcs.c \
	   bonus/pb.c \
	   bonus/rra.c\
	   bonus/rrb.c\
	   bonus/ft_atoi_plus.c\
	   bonus/rrr.c\
	   bonus/ss.c\
	   bonus/sa.c\
	   bonus/total_b.c\
	   bonus/ra.c\
	   bonus/sb.c\
	   bonus/check_sort_at_end.c\
	   bonus/get_next_line.c\
	   bonus/get_next_line_utils.c\
	   bonus/ft_strcmp.c\
	   bonus/checker.c\
	   bonus/app_command.c\
	   bonus/take_cmmd_checker.c\
	   bonus/ft_split.c\
	   
OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\xE2\x9C\x94 \033[32mpush_swap program has been created successufly\033[0330m"

%.o : %.c
	@gcc $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS) $(B_OBJS)

fclean : clean
	@rm -f $(NAME) $(BONUS)

re : fclean all

bonus : $(BONUS)

$(BONUS) : $(B_OBJS)
	@gcc $(FLAGS) $(B_OBJS) -o $(BONUS)
	@echo "\xE2\x9C\x94 \033[32mchecker program has been created successufly\033[0330m"

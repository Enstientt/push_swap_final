# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 23:35:17 by zessadqu          #+#    #+#              #
#    Updated: 2022/06/05 16:21:30 by zessadqu         ###   ########.fr        #
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
	   check_sort_at_end.c\
	   lis_helper.c\
	   sort_med_helper.c
	   
B_SRCS = pa.c \
		rb.c\
	   rr.c	\
	   free_funcs.c \
	   pb.c \
	   rra.c\
	   rrb.c\
	   ft_atoi_plus.c\
	   rrr.c\
	   ss.c\
	   sa.c\
	   total_b.c\
	   duplicate_check.c\
	   funct_helper.c\
	   ra.c\
	   sb.c\
	   check_sort_at_end.c\
	   get_next_line.c\
	   get_next_line_utils.c\
	   ft_strncmp.c\
	   checker.c\
	   app_command.c\
	   take_cmmd_checker.c\
	   ft_split.c\
	   
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

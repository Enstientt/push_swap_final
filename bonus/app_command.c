/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:28:39 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:27:13 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	wrong_command(void)
{
	write(1, "\033[31mError\033[0330m\n", 15);
	exit(1);
}

void	app_command(char *str, t_nums **a, t_nums **b)
{
	if (ft_strcmp(str, "sa\n") == 0)
		swap_a(a);
	else if (ft_strcmp(str, "sb\n") == 0)
		swap_b(b);
	else if (ft_strcmp(str, "ss\n") == 0)
		swap_ab(a, b);
	else if (ft_strcmp(str, "pa\n") == 0)
		push_a(a, b);
	else if (ft_strcmp(str, "pb\n") == 0)
		push_b(a, b);
	else if (ft_strcmp(str, "ra\n") == 0)
		rotate_a(a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rotate_b(b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(str, "rra\n") == 0)
		reverse_a(a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		reverse_b(b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(a, b);
	else
		wrong_command();
}

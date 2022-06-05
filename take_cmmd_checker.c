/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_cmmd_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:47:38 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 15:58:49 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	dup_check_c(t_nums *head, int nbr, t_nums **a)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->num == nbr)
			i++;
		head = head->next;
	}
	if (i >= 2)
	{
		write(1, "\33[31mError\033[0m\n", 15);
		free_here(a);
		exit(1);
	}
}

int	grab_command(t_nums **a, t_nums **b)
{
	char	*line;

	line = get_next_line (0);
	while (line)
	{
		app_command(line, a, b);
		free(line);
		line = get_next_line(0);
	}
	if (*b != NULL)
	{
		write(1, "\33[31mKO\033[0m\n", 15);
		free_here(a);
		free_here(b);
		exit(1);
	}
	if (check_sort_at_end(*a, *b) == 1)
		write(1, "\033[32mOK\033[0m\n", 15);
	else
		write(1, "\033[31mKO\033[0m\n", 15);
	return (0);
}

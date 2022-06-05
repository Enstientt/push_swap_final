/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:10:00 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 16:10:37 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	duplicate_check(t_nums *head, int nbr, t_nums **a)
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
		write (1, "\33[31mError\033[0m\n", 15);
		free_here(a);
		exit(1);
	}
}

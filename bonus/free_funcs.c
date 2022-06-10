/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:42:02 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:24:44 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_here(t_nums **all)
{
	t_nums	*tmp;

	while (*all)
	{
		tmp = *all;
		tmp->num = 0;
		(*all) = (*all)->next;
		free(tmp);
	}
}

void	free_a_and_b(t_nums **a, t_nums **b)
{
	free_here(a);
	free_here(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:19:09 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:25:39 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_a(t_nums **a)
{
	t_nums	*swap;

	if (*a == NULL)
		return ;
	swap = *a;
	(*a) = (*a)->next;
	swap->next = (*a)->next;
	(*a)->next = swap;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:13:33 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 11:32:29 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	push_a(t_nums **a, t_nums **b)
{
	t_nums	*bot_b;

	if (*b == NULL)
		return ;
	bot_b = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = bot_b;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:25:12 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 11:32:52 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	rotate_b(t_nums **b)
{
	t_nums	*tmp;

	tmp = *b;
	if (!(*b))
		return ;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	tmp = tmp->next;
	(*b) = (*b)->next;
	(*b)->next = NULL;
	(*b) = tmp;
}

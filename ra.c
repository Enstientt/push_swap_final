/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:36:40 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 11:32:46 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	rotate_a(t_nums **a)
{
	t_nums	*tmp;

	tmp = *a;
	if (!(*a))
		return ;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = tmp;
	tmp = tmp->next;
	(*a) = (*a)->next;
	(*a)->next = NULL;
	(*a) = tmp;
}

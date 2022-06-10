/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:36:40 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:25:15 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

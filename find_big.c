/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:08:38 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 16:30:36 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long	find_big(t_nums *a)
{
	long	biggest;

	biggest = a->num;
	while (a)
	{
		if (a->num > biggest)
			biggest = a->num;
		a = a->next;
	}
	return (biggest);
}

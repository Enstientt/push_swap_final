/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:09:24 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 16:28:34 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	find_smal(t_nums *a)
{
	int	smal;

	smal = a->num;
	while (a)
	{
		if (a->num < smal)
			smal = a->num;
		a = a->next;
	}
	return (smal);
}

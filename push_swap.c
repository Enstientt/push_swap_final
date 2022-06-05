/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:09:04 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 16:05:16 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	push(long long value, t_nums **a)
{
	t_nums	*tmp;

	tmp = malloc(sizeof(t_nums));
	tmp->num = value;
	tmp->next = (*a);
	tmp->prev = NULL;
	if ((*a) != NULL)
		(*a)->prev = tmp;
	(*a) = tmp;
}

void	great_list(int argc, char **argv, t_nums **a, int flag)
{
	t_nums	*tmp;
	int		i;

	tmp = *a;
	i = 1;
	argc--;
	while (argc)
	{
		push(ft_atoi_digit_confirm(argv[argc], a), a);
		duplicate_check(*a, ft_atoi_digit_confirm(argv[argc], a), a);
		argc--;
	}
	if (flag == 0)
	{
		push(ft_atoi_digit_confirm(argv[argc], a), a);
		duplicate_check(*a, ft_atoi_digit_confirm(argv[argc], a), a);
	}
}

void	printlist(t_nums **a)
{
	t_nums	*c;

	c = malloc(sizeof (t_nums));
	if (!c)
		return ;
	c = *a;
	while (c)
	{
		printf("%ld \n", c->num);
		c = c->next;
	}
}

int	main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;
	int		i;

	i = 0;
	a = NULL;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ', &argc);
		great_list(argc, argv, &a, 0);
		argc++;
	}
	else
		great_list(argc, argv, &a, 1);
	b = NULL;
	if (argc == 2)
		return (0);
	if (a == NULL || check_sort(a) == 1)
		return (0);
	if (argc >= 2 && argc < 7)
		i += one_to_five(&a, &b, argc);
	if (argc >= 7 && argc <= 501)
		sort_med(&a, &b);
	return (0);
}

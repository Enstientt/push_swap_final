/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:55:22 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 16:37:24 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
		dup_check_c(*a, ft_atoi_digit_confirm(argv[argc], a), a);
		argc--;
	}
	if (flag == 0)
	{
		push(ft_atoi_digit_confirm(argv[argc], a), a);
		dup_check_c(*a, ft_atoi_digit_confirm(argv[argc], a), a);
	}
}

int	main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;

	a = NULL;
	if (argc <= 1)
		exit(0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ', &argc);
		great_list(argc, argv, &a, 0);
		argc++;
	}
	else
		great_list(argc, argv, &a, 1);
	b = NULL;
	if (a == NULL)
		return (0);
	grab_command(&a, &b);
	free_here(&a);
	free_here(&b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:13:32 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 19:26:02 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

static void	exit_not_a_num(t_nums **a)
{
	write(1, "\033[31mError\033[0m\n", 15);
	free_here(a);
	exit(1);
}

static void	above_int_max_c(long long nbr, t_nums **a)
{
	long long int	i;
	long long int	small;

	i = 1;
	small = -2147483648;
	if (nbr > 2147483647)
	{
		write(1, "\033[31mError\033[0m\n", 15);
		free_here(a);
		exit(1);
	}
	if (nbr < small)
	{
		write(1, "\033[31mError\033[0m\n", 15);
		free_here(a);
		exit(1);
	}
}

static int	is_space(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}

long long	ft_atoi_digit_confirm(const char *str, t_nums **a)
{
	long long	i;
	long long	nbr;
	int			negative;

	nbr = 0;
	negative = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
		exit_not_a_num(a);
	above_int_max_c(nbr * negative, a);
	return (nbr * negative);
}

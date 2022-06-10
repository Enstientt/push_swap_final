/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:57:35 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:24:51 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

typedef struct string_cord
{
	size_t	length;
	size_t	start_1;
	size_t	next;
}	t_cord;

static t_cord	find_indexs(char const *str, char c, size_t start_index);

static size_t	string_counter(char const *str, char c);

static char		*nth_string(char const *str, t_cord cord);

static void		*free_alloc(char **str, size_t elem);

char	**ft_split(char const *str, char c, int *con)
{
	char	**str_re;
	size_t	index;
	size_t	count;
	t_cord	cord;

	index = 0;
	if (!str)
		return (NULL);
	count = string_counter(str, c) + 1;
	*con = count - 1;
	cord = find_indexs(str, c, 0);
	str_re = (char **)malloc(sizeof(char *) * count);
	if (!str_re)
		return (NULL);
	while (index < count - 1)
	{
		str_re[index] = nth_string(str, cord);
		if (!str_re[index])
			return (free_alloc(str_re, index));
		cord = find_indexs(str, c, cord.next);
		index++;
	}
	str_re[index] = 0;
	return (str_re);
}

static size_t	string_counter(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
			i++;
		count++;
	}
	if (i > 0 && str[i - 1] == c)
		count--;
	return (count);
}

static t_cord	find_indexs(char const *str, char c, size_t start_index)
{
	t_cord	reslt;
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (str[start_index] == c && str[start_index])
		start_index++;
	reslt.start_1 = start_index;
	while (str[start_index] != c && str[start_index])
	{
		length++;
		start_index++;
	}
	reslt.length = length;
	while (str[start_index] == c && str[start_index])
		start_index++;
	reslt.next = start_index;
	return (reslt);
}

static char	*nth_string(char const *str, t_cord cord)
{
	char	*str_2;
	size_t	index;
	size_t	index_start;

	index_start = cord.start_1;
	index = 0;
	str_2 = (char *)malloc(sizeof(char) * cord.length + 1);
	if (!str_2)
		return (NULL);
	while (index < cord.length)
	{
		str_2[index] = str[index_start + index];
		index++;
	}
	str_2[index] = '\0';
	return (str_2);
}

static void	*free_alloc(char **str, size_t elem)
{
	size_t	i;

	i = 0;
	while (i <= elem)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

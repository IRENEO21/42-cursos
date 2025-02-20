/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:43:41 by bchen             #+#    #+#             */
/*   Updated: 2024/11/29 18:44:23 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index(t_list *x)
{
	int		max;
	t_list	*t;

	max = x->index;
	t = x;
	while (x->next != NULL)
	{
		if (x->next->index > max)
			max = x->next->index;
		x = x->next;
	}
	x = t;
	return (max);
}

int	min_index(t_list *x)
{
	int		min;
	t_list	*t;

	min = x->index;
	t = x;
	while (x->next != NULL)
	{
		if (x->next->index < min)
			min = x->next->index;
		x = x->next;
	}
	x = t;
	return (min);
}

int	min_cost(t_list *x)
{
	int		min;
	t_list	*t;

	min = x->cos;
	t = x;
	while (x->next != NULL)
	{
		if (x->next->cos < min)
			min = x->next->cos;
		x = x->next;
	}
	x = t;
	return (min);
}

int	min_cost_min_indx(t_list *x, int c)
{
	int		min;
	t_list	*t;

	t = x;
	while (x->cos != c)
		x = x->next;
	min = x->index;
	x = t;
	while (x != NULL)
	{
		if (x->cos == c && x->index < min)
			min = x->index;
		x = x->next;
	}
	x = t;
	return (min);
}

int	ft_size(t_list *list)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = list;
	while (list != NULL)
	{
		i++;
		list = list->next;
	}
	list = temp;
	return (i);
}

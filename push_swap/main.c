/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:48:17 by bchen             #+#    #+#             */
/*   Updated: 2024/11/29 18:48:34 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_final_free(int argc, char **res, char **argv)
{
	if (argc == 2)
		freessplit(res, mallocsize(argv[1], ' '));
	else
		free(res);
}

int	main(int argc, char **argv)
{
	char	**res;
	t_list	*a;
	t_list	*b;

	if (argc <= 1)
		return (0);
	res = ft_rescreator(argc, argv);
	if (ft_not_alpha(res) == 0 || ft_number(res) == 0
		|| ft_valid_arg(argc, argv) == 0)
	{
		if (argc == 2)
			freessplit(res, mallocsize(argv[1], ' '));
		else
			free(res);
		return (0);
	}
	b = NULL;
	a = new_num(ft_atoi(res[0]), 1, 1, 'a');
	fill_sort_index_a(&a, res, argc, argv);
	ft_push_swap(&a, &b);
	ft_final_free(argc, res, argv);
	return (0);
}

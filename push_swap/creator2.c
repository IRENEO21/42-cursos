/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creator2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:46:57 by bchen             #+#    #+#             */
/*   Updated: 2024/11/29 18:47:10 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_arg(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	k = 1;
	if (argc == 2)
		return (k);
	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '\0')
			k = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == ' ')
				k = 0;
			j++;
		}
		i++;
	}
	if (k == 0)
		ft_printf("Error\n");
	return (k);
}

void	ft_first_validation(t_list **a, char **res, int argc, char **argv)
{
	int		i;
	t_list	*c_a;

	i = 0;
	c_a = *a;
	while (*a != NULL)
	{
		if ((*a)->index == (*a)->pos)
			i++;
		*a = (*a)->next;
	}
	*a = c_a;
	if (i == ft_size(*a))
	{
		if (argc == 2)
			freessplit(res, mallocsize(argv[1], ' '));
		else
			free(res);
		ft_free(a);
		exit (0);
	}
}

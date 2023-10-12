/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:47:09 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 04:03:34 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	checkargs(char *str)
{
	int	i;

	i = -1;
	if (ft_strlen(str) == 0)
		return (0);
	while (++i < ft_strlen(str))
	{
		if (ft_strlen(str) == 1 && (str[i] == 45 \
		|| str[i] == 32 || str[i] == 43))
			return (0);
		ft_atoii(str);
	}
	return (1);
}

int	checkdupe(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
		if (!checkargs(argv[i]))
			ft_error();
	i = 0;
	if (argc == 2)
		return (1);
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_error();
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	t_pile	*pa;
	t_pile	*pb;

	i = 0;
	if (argc > 1 && checkdupe(argc, argv))
	{
		pa = init();
		pb = init();
		while (++i < argc)
			inser_back(pa, ft_atoi(argv[i]));
		if (!is_sorted(pa))
		{
			sort_b(pa, pb);
			sort_a(pa, pb);
		}
		free_pile(pa, pb);
	}
	return (0);
}

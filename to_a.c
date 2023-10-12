/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:43:13 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 23:48:12 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	made_move_a(t_pile *pA, t_pile *pB, int num, int j)
{
	if (j == 0)
		return (move1_a(pA, pB, num));
	if (j == 1)
		return (move2_a(pA, pB, num));
	if (j == 2)
		return (move3_a(pA, pB, num));
	if (j == 3)
		return (move4_a(pA, pB, num));
}

void	finishsort_a(t_pile *pA, t_pile *pB)
{
	int	index_min;

	index_min = indexof(pA, minimum(pA));
	if (index_min < len_pile(pA) - index_min)
	{
		while (pA->first->number != minimum(pA))
		{
			rotate(pA);
			write(1, "ra\n", 3);
		}
	}
	else
	{
		while (pA->first->number != minimum(pA))
		{
			reverse_rotate(pA);
			write(1, "rra\n", 4);
		}
	}
}

void	sort_a(t_pile *pA, t_pile *pB)
{
	char		*cmd_list;
	t_element	*temp;
	int			i;
	int			j;

	if (!is_sorted(pA))
		sort_athree(pA);
	while (pB->first)
	{
		i = calculate_a(pA, pB);
		j = -1;
		while (++j != 4 && i != -1)
		{
			temp = pB->first;
			while (temp && i != -1)
			{
				if (i == test_move_a(pA, pB, temp->number, j))
					i = made_move_a(pA, pB, temp->number, j);
				temp = temp->next;
			}
		}
	}
	finishsort_a(pA, pB);
}

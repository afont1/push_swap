/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:26:45 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 01:52:21 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	made_move_b(t_pile *pA, t_pile *pB, int num, int j)
{
	if (j == 0)
		return (move1_b(pA, pB, num));
	if (j == 1)
		return (move2_b(pA, pB, num));
	if (j == 2)
		return (move3_b(pA, pB, num));
	if (j == 3)
		return (move4_b(pA, pB, num));
}

void	doublepush(t_pile *pA, t_pile *pB)
{
	if (len_pile(pA) > 3)
	{
		pushxtoy(pA, pB);
		pushxtoy(pA, pB);
		write(1, "pb\npb\n", 6);
	}
}

void	sort_b(t_pile *pA, t_pile *pB)
{
	char		*cmd_list;
	t_element	*temp;
	int			i;
	int			j;

	doublepush(pA, pB);
	while (len_pile(pA) > 3 && !is_sorted(pA))
	{
		i = calculate_b(pA, pB);
		j = -1;
		while (++j != 4 && i != -1)
		{
			temp = pA->first;
			while (temp && i != -1)
			{
				if (i == test_move_b(pA, pB, temp->number, j))
					i = made_move_b(pA, pB, temp->number, j);
				temp = temp->next;
			}
		}
	}
}

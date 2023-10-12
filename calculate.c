/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:22:21 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 03:11:44 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	test_move_b(t_pile *pA, t_pile *pB, int num, int i)
{
	if (i == 0)
		return (testmove1_b(pA, pB, num));
	if (i == 1)
		return (testmove2_b(pA, pB, num));
	if (i == 2)
		return (testmove3_b(pA, pB, num));
	if (i == 3)
		return (testmove4_b(pA, pB, num));
}

int	test_move_a(t_pile *pA, t_pile *pB, int num, int i)
{
	if (i == 0)
		return (testmove1_a(pA, pB, num));
	if (i == 1)
		return (testmove2_a(pA, pB, num));
	if (i == 2)
		return (testmove3_a(pA, pB, num));
	if (i == 3)
		return (testmove4_a(pA, pB, num));
}

int	calculate_b(t_pile *pA, t_pile *pB)
{
	int			nb_ope;
	t_element	*temp;
	int			i;

	nb_ope = 2147483647;
	i = -1;
	while (++i != 4)
	{
		temp = pA->first;
		while (temp)
		{
			if (nb_ope > test_move_b(pA, pB, temp->number, i))
				nb_ope = test_move_b(pA, pB, temp->number, i);
			temp = temp->next;
		}
	}
	return (nb_ope);
}

int	calculate_a(t_pile *pA, t_pile *pB)
{
	int			nb_ope;
	t_element	*temp;
	int			i;

	nb_ope = 2147483647;
	i = -1;
	while (++i != 4)
	{
		temp = pB->first;
		while (temp)
		{
			if (nb_ope > test_move_a(pA, pB, temp->number, i))
				nb_ope = test_move_a(pA, pB, temp->number, i);
			temp = temp->next;
		}
	}
	return (nb_ope);
}

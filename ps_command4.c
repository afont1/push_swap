/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_command4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 01:52:23 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 04:18:10 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	maximum(t_pile *pile)
{
	int			i;
	t_element	*temp;

	i = pile->first->number;
	temp = pile->first;
	while (temp)
	{
		if (temp->number > i)
			i = temp->number;
		temp = temp->next;
	}
	return (i);
}

int	minimum(t_pile *pile)
{
	int			i;
	t_element	*temp;

	i = pile->first->number;
	temp = pile->first;
	while (temp)
	{
		if (temp->number < i)
			i = temp->number;
		temp = temp->next;
	}
	return (i);
}

int	indexof(t_pile *pile, int num)
{
	int			i;
	t_element	*temp;

	temp = pile->first;
	i = 0;
	while (temp->number != num)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	indexin_b(t_pile *pB, int num)
{
	int			index;
	int			max;
	t_element	*temp;
	t_element	*temp2;

	index = 1;
	max = maximum(pB);
	if (num > pB->first->number && num < lastelement(pB))
		index = 0;
	else if (num > max || num < minimum(pB))
		index = indexof(pB, max);
	else
	{
		temp = pB->first;
		temp2 = pB->first->next;
		while (temp->number < num || temp2->number > num)
		{
			temp = temp->next;
			temp2 = temp->next;
			index++;
		}
	}
	return (index);
}

int	indexin_a(t_pile *pA, int num)
{
	int			index;
	int			min;
	t_element	*temp;
	t_element	*temp2;

	index = 1;
	min = minimum(pA);
	if (num < pA->first->number && num > lastelement(pA))
		index = 0;
	else if (num > maximum(pA) || num < min)
		index = indexof(pA, min);
	else
	{
		temp = pA->first;
		temp2 = pA->first->next;
		while (temp->number > num || temp2->number < num)
		{
			temp = temp->next;
			temp2 = temp->next;
			index++;
		}
	}
	return (index);
}

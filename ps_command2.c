/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_command2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:39:01 by afont             #+#    #+#             */
/*   Updated: 2022/07/28 02:12:43 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_pile(t_pile *pile)
{
	int			len;
	t_element	*temp;

	temp = pile -> first;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp -> next;
	}
	return (len);
}

void	swap(t_pile *pile)
{
	int	temp1;
	int	temp2;

	if (len_pile(pile) > 1)
	{
		temp1 = pile -> first -> number;
		del(pile);
		temp2 = pile -> first -> number;
		del(pile);
		inser(pile, temp1);
		inser(pile, temp2);
	}
}

void	pushxtoy(t_pile *pileX, t_pile *pileY)
{
	int	temp;

	if (len_pile(pileX) > 0)
	{
		temp = pileX -> first -> number;
		del(pileX);
		inser(pileY, temp);
	}
}

void	rotate(t_pile *pile)
{
	int	temp;

	if (len_pile(pile) > 1)
	{
		temp = pile -> first -> number;
		del(pile);
		inser_back(pile, temp);
	}
}

void	reverse_rotate(t_pile *pile)
{
	int	temp;

	if (len_pile(pile) > 1)
	{
		temp = del_back(pile);
		inser(pile, temp);
	}
}

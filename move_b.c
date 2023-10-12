/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 06:55:34 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 13:56:59 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	move1_b(t_pile *pA, t_pile *pB, int num)
{
	while (pA->first->number != num && indexin_b(pB, num) > 0)
	{
		rotate(pA);
		rotate(pB);
		write(1, "rr\n", 3);
	}
	while (pA->first->number != num)
	{
		rotate(pA);
		write(1, "ra\n", 3);
	}
	while (indexin_b(pB, num) > 0)
	{
		rotate(pB);
		write(1, "rb\n", 3);
	}
	pushxtoy(pA, pB);
	write(1, "pb\n", 3);
	return (-1);
}

int	move2_b(t_pile *pA, t_pile *pB, int num)
{
	while (pA->first->number != num && indexin_b(pB, num) > 0)
	{
		reverse_rotate(pA);
		reverse_rotate(pB);
		write(1, "rrr\n", 4);
	}
	while (pA->first->number != num)
	{
		reverse_rotate(pA);
		write(1, "rra\n", 4);
	}
	while (indexin_b(pB, num) > 0)
	{
		reverse_rotate(pB);
		write(1, "rrb\n", 4);
	}
	pushxtoy(pA, pB);
	write(1, "pb\n", 3);
	return (-1);
}

int	move3_b(t_pile *pA, t_pile *pB, int num)
{
	while (pA->first->number != num)
	{
		rotate(pA);
		write(1, "ra\n", 3);
	}
	while (indexin_b(pB, num) > 0)
	{
		reverse_rotate(pB);
		write(1, "rrb\n", 4);
	}
	pushxtoy(pA, pB);
	write(1, "pb\n", 3);
	return (-1);
}

int	move4_b(t_pile *pA, t_pile *pB, int num)
{
	while (pA->first->number != num)
	{
		reverse_rotate(pA);
		write(1, "rra\n", 4);
	}
	while (indexin_b(pB, num) > 0)
	{
		rotate(pB);
		write(1, "rb\n", 3);
	}
	pushxtoy(pA, pB);
	write(1, "pb\n", 3);
	return (-1);
}

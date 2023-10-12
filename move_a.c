/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:46:54 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 13:56:59 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	move1_a(t_pile *pA, t_pile *pB, int num)
{
	while (pB->first->number != num && indexin_a(pA, num) > 0)
	{
		rotate(pA);
		rotate(pB);
		write(1, "rr\n", 3);
	}
	while (pB->first->number != num)
	{
		rotate(pB);
		write(1, "rb\n", 3);
	}
	while (indexin_a(pA, num) > 0)
	{
		rotate(pA);
		write(1, "ra\n", 3);
	}
	pushxtoy(pB, pA);
	write(1, "pa\n", 3);
	return (-1);
}

int	move2_a(t_pile *pA, t_pile *pB, int num)
{
	while (pB->first->number != num && indexin_a(pA, num) > 0)
	{
		reverse_rotate(pA);
		reverse_rotate(pB);
		write(1, "rrr\n", 4);
	}
	while (pB->first->number != num)
	{
		reverse_rotate(pB);
		write(1, "rrb\n", 4);
	}
	while (indexin_a(pA, num) > 0)
	{
		reverse_rotate(pA);
		write(1, "rra\n", 4);
	}
	pushxtoy(pB, pA);
	write(1, "pa\n", 3);
	return (-1);
}

int	move3_a(t_pile *pA, t_pile *pB, int num)
{
	while (indexin_a(pA, num) > 0)
	{
		rotate(pA);
		write(1, "ra\n", 3);
	}
	while (pB->first->number != num)
	{
		reverse_rotate(pB);
		write(1, "rrb\n", 4);
	}
	pushxtoy(pB, pA);
	write(1, "pa\n", 3);
	return (-1);
}

int	move4_a(t_pile *pA, t_pile *pB, int num)
{
	while (indexin_a(pA, num) > 0)
	{
		reverse_rotate(pA);
		write(1, "rra\n", 4);
	}
	while (pB->first->number != num)
	{
		rotate(pB);
		write(1, "rb\n", 3);
	}
	pushxtoy(pB, pA);
	write(1, "pa\n", 3);
	return (-1);
}

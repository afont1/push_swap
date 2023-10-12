/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmove_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 06:55:34 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 03:12:28 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	testmove1_b(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;

	nb_ope = indexin_b(pB, num);
	if (nb_ope < indexof(pA, num))
		nb_ope = indexof(pA, num);
	return (nb_ope);
}

int	testmove2_b(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;

	nb_ope = 0;
	if (indexin_b(pB, num))
		nb_ope = len_pile(pB) - indexin_b(pB, num);
	if ((nb_ope < (len_pile(pA) - indexof(pA, num))) && indexof(pA, num))
		nb_ope = len_pile(pA) - indexof(pA, num);
	return (nb_ope);
}

int	testmove3_b(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;

	nb_ope = 0;
	if (indexin_b(pB, num))
		nb_ope = len_pile(pB) - indexin_b(pB, num);
	nb_ope = indexof(pA, num) + nb_ope;
	return (nb_ope);
}

int	testmove4_b(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;

	nb_ope = 0;
	if (indexof(pA, num))
		nb_ope = len_pile(pA) - indexof(pA, num);
	nb_ope = indexin_b(pB, num) + nb_ope;
	return (nb_ope);
}

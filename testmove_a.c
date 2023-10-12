/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmove_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:12:08 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 08:18:46 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	testmove1_a(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;
	int	i;

	i = indexof(pB, num);
	nb_ope = indexin_a(pA, num);
	if (nb_ope < i)
		nb_ope = i;
	return (nb_ope);
}

int	testmove2_a(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;
	int	i;
	int	j;

	i = indexof(pB, num);
	j = indexin_a(pA, num);
	nb_ope = 0;
	if (j)
		nb_ope = len_pile(pA) - j;
	if ((nb_ope < (len_pile(pB) - i)) && i)
		nb_ope = len_pile(pB) - i;
	return (nb_ope);
}

int	testmove3_a(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;
	int	i;

	i = indexof(pB, num);
	nb_ope = 0;
	if (i)
		nb_ope = len_pile(pB) - i;
	nb_ope = indexin_a(pA, num) + nb_ope;
	return (nb_ope);
}

int	testmove4_a(t_pile *pA, t_pile *pB, int num)
{
	int	nb_ope;
	int	i;

	i = indexin_a(pA, num);
	nb_ope = 0;
	if (i)
		nb_ope = len_pile(pA) - i;
	nb_ope = indexof(pB, num) + nb_ope;
	return (nb_ope);
}

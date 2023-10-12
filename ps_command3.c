/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_command3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:33:21 by afont             #+#    #+#             */
/*   Updated: 2022/07/28 00:13:43 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	firstelement(t_pile *pile)
{
	if (len_pile(pile) != 0)
		return (pile -> first -> number);
	return (-1);
}

int	lastelement(t_pile *pile)
{
	int			result;
	t_element	*temp;

	if (!pile)
		exit(EXIT_FAILURE);
	if (pile -> first)
	{
		if (pile -> first -> next != NULL)
		{
			temp = pile -> first;
			while (temp -> next -> next != NULL)
				temp = temp -> next;
			result = temp -> next -> number;
			return (result);
		}
		else
			return (pile -> first -> number);
	}
	return (-1);
}

void	print_pile(t_pile *pile)
{
	t_element	*print;

	if (!pile)
		exit(EXIT_FAILURE);
	print = pile -> first;
	while (print != NULL)
	{
		ft_printf("%d -> ", print -> number);
		print = print -> next;
	}
	ft_printf("NULL\n");
}

int	free_pile(t_pile *pA, t_pile *pB)
{
	while (pA -> first)
		del(pA);
	while (pB -> first)
		del(pB);
	free(pA);
	free(pB);
	return (-1);
}

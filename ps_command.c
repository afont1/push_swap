/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:34:11 by afont             #+#    #+#             */
/*   Updated: 2022/07/28 02:52:59 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*init(void)
{
	t_pile		*pile;
	t_element	*element;

	pile = malloc(sizeof(*pile));
	element = malloc(sizeof(*element));
	if (!pile || !element)
		exit(EXIT_FAILURE);
	element -> number = 0;
	element -> next = NULL;
	pile -> first = element;
	del(pile);
	return (pile);
}

void	inser(t_pile *pile, int nw_number)
{
	t_element	*new;

	new = malloc(sizeof(*new));
	if (!pile || !new)
		exit(EXIT_FAILURE);
	new -> number = nw_number;
	new -> next = pile -> first;
	pile -> first = new;
}

void	inser_back(t_pile *pile, int nw_number)
{
	t_element	*new;
	t_element	*temp;

	new = malloc (sizeof(*new));
	if (!pile || !new)
		exit(EXIT_FAILURE);
	new -> number = nw_number;
	new -> next = NULL;
	temp = pile -> first;
	if (temp)
	{
		while (temp -> next != NULL)
			temp = temp -> next;
		temp -> next = new;
	}
	else
	{
		free(new);
		inser(pile, nw_number);
	}
}

int	del(t_pile *pile)
{
	t_element	*to_del;
	int			result;

	if (!pile)
		exit(EXIT_FAILURE);
	if (pile -> first)
	{
		result = pile -> first -> number;
		to_del = pile -> first;
		pile -> first = pile -> first -> next;
		free(to_del); 
	}
	return (result);
}

int	del_back(t_pile *pile)
{
	int			result;
	t_element	*to_del;

	if (!pile)
		exit(EXIT_FAILURE);
	if (pile -> first)
	{
		if (pile -> first -> next != NULL)
		{
			to_del = pile -> first;
			while (to_del -> next -> next != NULL)
				to_del = to_del -> next;
			result = to_del -> next -> number;
			free(to_del -> next);
			to_del -> next = NULL;
			return (result);
		}
		else
			return (del(pile));
	}
	return (-1);
}

/*int main()
{
	t_pile *pA = init(1);
	inser(pA, 2);
	inser(pA, 10);
	inser_back(pA, 3);

	printf("%d", lastelement(pA));
}*/
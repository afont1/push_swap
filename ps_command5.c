/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_command5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:46:24 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 09:50:00 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	else_sort_three(t_pile *pA)
{
	if (indexof(pA, maximum(pA)) == 1)
	{
		reverse_rotate(pA);
		write(1, "rra\n", 4);
	}
	else
	{
		swap(pA);
		write(1, "sa\n", 3);
	}
}

int	is_sorted(t_pile *pile)
{
	t_element	*temp;
	t_element	*temp2;

	temp = pile->first;
	temp2 = temp->next;
	while (temp2)
	{
		if (temp->number > temp2->number)
			return (0);
		temp = temp->next;
		temp2 = temp->next;
	}
	return (1);
}

void	sort_athree(t_pile *pA)
{
	if (minimum(pA) == pA->first->number)
	{
		reverse_rotate(pA);
		swap(pA);
		write(1, "rra\nsa\n", 7);
	}
	else if (maximum(pA) == pA->first->number)
	{
		rotate(pA);
		write(1, "ra\n", 3);
		if (!is_sorted(pA))
		{
			swap(pA);
			write(1, "sa\n", 3);
		}
	}
	else
		else_sort_three(pA);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoii(const char *str)
{
	long long int	num;
	int				sign;

	num = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n'\
			|| *str == '\r' || *str == '\v'\
			|| *str == '\f' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		num = num * 10 + (*str - 48);
		str++;
	}
	if ((sign * num) > 2147483647 || (sign * num) < -2147483648)
		ft_error();
	return (sign * num);
}

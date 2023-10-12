/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 01:56:12 by afont             #+#    #+#             */
/*   Updated: 2022/08/08 11:48:21 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf/include/ft_printf.h"

typedef struct s_element	t_element;
struct s_element
{
	int			number;
	t_element	*next;
};

typedef struct s_pile		t_pile;
struct s_pile
{
	t_element	*first;
};

t_pile	*init(void);
void	inser(t_pile *pile, int nw_number);
void	inser_back(t_pile *pile, int nw_number);
int		del(t_pile *pile);
int		del_back(t_pile *pile);
int		len_pile(t_pile *pile);
void	swap(t_pile *pile);
void	pushxtoy(t_pile *pileX, t_pile *pileY);
void	rotate(t_pile *pile);
void	reverse_rotate(t_pile *pile);
int		firstelement(t_pile *pile);
int		lastelement(t_pile *pile);
void	print_pile(t_pile *pile);
int		free_pile(t_pile *pA, t_pile *pB);
int		calculate_b(t_pile *pA, t_pile *pB);
int		calculate_a(t_pile *pA, t_pile *pB);
int		test_move_b(t_pile *pA, t_pile *pB, int num, int i);
int		test_move_a(t_pile *pA, t_pile *pB, int num, int i);
int		move4_a(t_pile *pA, t_pile *pB, int num);
int		move3_a(t_pile *pA, t_pile *pB, int num);
int		move2_a(t_pile *pA, t_pile *pB, int num);
int		move1_a(t_pile *pA, t_pile *pB, int num);
int		move4_b(t_pile *pA, t_pile *pB, int num);
int		move3_b(t_pile *pA, t_pile *pB, int num);
int		move2_b(t_pile *pA, t_pile *pB, int num);
int		move1_b(t_pile *pA, t_pile *pB, int num);
int		testmove4_b(t_pile *pA, t_pile *pB, int num);
int		testmove3_b(t_pile *pA, t_pile *pB, int num);
int		testmove2_b(t_pile *pA, t_pile *pB, int num);
int		testmove1_b(t_pile *pA, t_pile *pB, int num);
int		testmove4_a(t_pile *pA, t_pile *pB, int num);
int		testmove3_a(t_pile *pA, t_pile *pB, int num);
int		testmove2_a(t_pile *pA, t_pile *pB, int num);
int		testmove1_a(t_pile *pA, t_pile *pB, int num);
void	sort_b(t_pile *pA, t_pile *pB);
int		made_move(t_pile *pA, t_pile *pB, int num, int j);
int		maximum(t_pile *pile);
int		minimum(t_pile *pile);
int		indexof(t_pile *pile, int num);
int		indexin_b(t_pile *pB, int num);
int		indexin_a(t_pile *pA, int num);
int		is_sorted(t_pile *pA);
void	sort_athree(t_pile *pA);
void	sort_a(t_pile *pA, t_pile *pB);
void	ft_error(void);
int		ft_atoii(const char *str);

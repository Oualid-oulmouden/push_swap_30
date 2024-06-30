/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_themove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:43:53 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 17:11:52 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	positive_moves(t_list **stack_a, t_list **stack_b, int i, int j)
{
	while (i && j)
	{
		retate_ab(stack_a, stack_b);
		write(1, "rr\n", 3);
		i--;
		j--;
	}
	while (i)
	{
		retate_a(stack_a);
		write(1, "ra\n", 3);
		i--;
	}
	while (j)
	{
		retate_b(stack_b);
		write(1, "rb\n", 3);
		j--;
	}
}

void	negative_moves(t_list **stack_a, t_list **stack_b, int i, int j)
{
	while (i && j)
	{
		retate_revers_ab(stack_a, stack_b);
		write(1, "rrr\n", 4);
		i++;
		j++;
	}
	while (i)
	{
		retate_revers_a(stack_a);
		write(1, "rra\n", 4);
		i++;
	}
	while (j)
	{
		retate_revers_b(stack_b);
		write(1, "rrb\n", 4);
		j++;
	}
}

void	pos_i_neg_j(t_list **stack_a, t_list **stack_b, int i, int j)
{
	while (j)
	{
		retate_revers_b(stack_b);
		write(1, "rrb\n", 4);
		j++;
	}
	while (i)
	{
		retate_a(stack_a);
		write(1, "ra\n", 3);
		i--;
	}
}

void	make_themove(t_list **stack_a, t_list **stack_b, int *mv)
{
	if (mv[0] <= 0 && mv[1] <= 0)
		negative_moves(stack_a, stack_b, mv[0], mv[1]);
	else if (mv[0] >= 0 && mv[1] >= 0)
		positive_moves(stack_a, stack_b, mv[0], mv[1]);
	else if (mv[0] <= 0 && mv[1] >= 0)
	{
		while (mv[0])
		{
			retate_revers_a(stack_a);
			write(1, "rra\n", 4);
			mv[0]++;
		}
		while (mv[1])
		{
			retate_b(stack_b);
			write(1, "rb\n", 3);
			mv[1]--;
		}
	}
	else if (mv[0] >= 0 && mv[1] <= 0)
		pos_i_neg_j(stack_a, stack_b, mv[0], mv[1]);
	push_to_a(stack_a, stack_b);
	write(1, "pa\n", 3);
}

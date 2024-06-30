/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:08:13 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/30 12:25:14 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void	move_min_nbr(t_list **stack_a, int i)
{
	while (i)
	{
		if (i < 0)
		{
			while (i++)
				retate_revers_a(stack_a);
		}
		else if (i > 0)
		{
			while (i--)
				retate_a(stack_a);
		}
		i = 0;
	}
}

int	binary_search(int *arr, int low, int high, int x)
{
	int	mid;

	mid = low + (high - low) / 2;
	if (high >= low)
	{
		if (arr[mid] == x)
			return (1);
		if (arr[mid] > x)
			return (binary_search(arr, low, mid - 1, x));
		return (binary_search(arr, mid + 1, high, x));
	}
	return (0);
}

void	make_rotate(t_list **stack_a, size_t i, size_t size)
{
	if (i <= size / 2)
	{
		while (i)
		{
			retate_a(stack_a);
			write(1, "ra\n", 3);
			i--;
		}
	}
	else
	{
		i = size - i;
		while (i)
		{
			retate_revers_a(stack_a);
			write(1, "rra\n", 4);
			i--;
		}
	}
}

void	push_tob(int *lis, t_list **stack_a, t_list **stack_b, int size)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (!binary_search(lis, 0, size, tmp->content))
		{
			make_rotate(stack_a, i, ft_lstsize(*stack_a));
			push_to_b(stack_a, stack_b);
			i = 0;
			write(1, "pb\n", 3);
			tmp = *stack_a;
			continue ;
		}
		tmp = tmp->next;
		i++;
	}
	free(lis);
}

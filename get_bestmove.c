/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bestmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:44:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 17:10:31 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	get_indexmaxnbr(int *arry, size_t size)
{
	size_t	i;
	int		tmp;
	size_t	index;

	i = 0;
	index = 0;
	tmp = INT_MIN;
	while (i < size)
	{
		if (tmp < arry[i])
		{
			tmp = arry[i];
			index = i + 1;
		}
		i++;
	}
	if (index > size / 2)
		return (-(size - index));
	return (index);
}

int	get_position(int *arry, int *nbr, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		if (*nbr > arry[i] && *nbr < arry[i + 1])
			return (i + 1);
		if (*nbr > arry[j - 1] && *nbr < arry[j])
			return (-(size - j));
		i++;
		j--;
	}
	if (*nbr < arry[0] && *nbr > arry[size - 1])
		return (0);
	else
		return (get_indexmaxnbr(arry, size));
	return (0);
}

int	*initialize_move(int *arry, void *ptr, size_t size_a)
{
	int	*move;

	move = (int *)malloc(sizeof(int) * 2);
	if (!move)
		return (NULL);
	move[0] = get_position(arry, ptr, size_a);
	move[1] = 0;
	return (move);
}

int	*get_bestmove(int *arry, t_list *stack_b, size_t size_a, size_t size_b)
{
	size_t	k;
	int		i;
	int		*move;
	int		b;

	k = 0;
	move = initialize_move(arry, &stack_b->content, size_a);
	if (!move)
		return (NULL);
	stack_b = stack_b->next;
	while (stack_b)
	{
		b = ++k;
		i = get_position(arry, &stack_b->content, size_a);
		if (k > size_b / 2)
			b = -(size_b - k);
		if (i >= 0 && b >= 0)
			positve_move(i, b, move);
		else if (i <= 0 && b <= 0)
			negative_move(i, b, move);
		else
			mix_move(i, b, move);
		stack_b = stack_b->next;
	}
	return (move);
}

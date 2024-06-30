/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positive_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:44:44 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/14 17:44:48 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	positve_move(int a, int b, int *mv)
{
	if (mv[0] >= 0 && mv[1] >= 0)
	{
		if (get_bigone(a, b) < get_bigone(mv[0], mv[1]))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
	else if (mv[0] <= 0 && mv[1] <= 0)
	{
		if ((size_t)get_bigone(a, b) < get_abs(get_small(mv[0], mv[1])))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
	else
	{
		if ((size_t)get_bigone(a, b) < get_abs(mv[0]) + get_abs(mv[1]))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:44:35 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/14 17:44:36 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	negative_move(int a, int b, int *mv)
{
	if (mv[0] >= 0 && mv[1] >= 0)
	{
		if ((size_t)get_bigone(mv[0], mv[1]) > get_abs(get_small(a, b)))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
	else if (mv[0] <= 0 && mv[1] <= 0)
	{
		if (get_small(a, b) > get_small(mv[0], mv[1]))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
	else
	{
		if (get_abs(get_small(a, b)) < get_abs(mv[0]) + get_abs(mv[1]))
		{
			mv[0] = a;
			mv[1] = b;
		}
	}
}

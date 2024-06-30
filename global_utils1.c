/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_utils1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:44:04 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 18:11:56 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

size_t	get_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_bigone(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

int	get_small(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

t_list	*get_the_last(t_list *head)
{
	while (head && head->next != NULL)
		head = head->next;
	return (head);
}

t_list	*get_the_befor_last(t_list *head)
{
	t_list	*temp;
	t_list	*prv;

	temp = head;
	while (temp->next)
	{
		prv = temp;
		temp = temp->next;
	}
	return (prv);
}

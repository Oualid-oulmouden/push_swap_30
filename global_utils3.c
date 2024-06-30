/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_utils3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:05:30 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 18:12:37 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	abs_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	lent_of_stack(t_list *head)
{
	int	lent;

	lent = 0;
	while (head != NULL)
	{
		head = head->next;
		lent++;
	}
	return (lent);
}

int	find_the_middel_of_stack(t_list *head)
{
	head->index = 0;
	while (head != NULL)
	{
		if (head->index == (lent_of_stack(head) - 1) / 2)
			return (head->index);
		head->index++;
	}
	return (0);
}

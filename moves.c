/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:25:24 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 16:35:14 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of_node(t_list *head, int content)
{
	int	index;

	index = 0;
	while (head != NULL)
	{
		if (head->content == content)
			return (index);
		index++;
		head = head->next;
	}
	return (0);
}

int	number_of_moves(t_list *head, int content)
{
	int	i;
	int	j;

	i = index_of_node(head, content);
	j = find_the_middel_of_stack(head);
	if (i <= j)
		return (i);
	if (i > j)
		return (lent_of_stack(head) - i);
	return (0);
}

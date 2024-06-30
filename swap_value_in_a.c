/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_value_in_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:03:46 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 17:33:47 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_value_in_a(t_list *head)
{
	t_list	*aid;
	t_list	*t;

	aid = malloc(sizeof(t_list));
	if (head == NULL || head->next == NULL)
		return ;
	t = head->next;
	aid->content = head->content;
	head->content = t->content;
	t->content = aid->content;
	free(aid);
}

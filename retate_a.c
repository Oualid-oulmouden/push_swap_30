/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:36:15 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 17:53:07 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retate_a(t_list **head)
{
	t_list	*temp;
	t_list	*var;

	temp = *head;
	(*head) = (*head)->next;
	var = get_the_last(*head);
	temp->next = NULL;
	var->next = temp;
}

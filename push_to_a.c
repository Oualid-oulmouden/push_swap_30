/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:19:35 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 16:35:25 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_list **head_a, t_list **head_b)
{
	t_list	*aid_b;
	t_list	*temp;

	if (head_b == NULL)
		return ;
	temp = (*head_b);
	aid_b = (*head_b)->next;
	(*head_b) = aid_b;
	temp->next = *head_a;
	*head_a = temp;
}

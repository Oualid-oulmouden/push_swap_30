/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:33:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/25 09:11:34 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_list **head_a, t_list **head_b)
{
	t_list	*aid_a;
	t_list	*temp;

	if (head_a == NULL)
		return ;
	temp = (*head_a);
	aid_a = (*head_a)->next;
	(*head_a) = aid_a;
	temp->next = *head_b;
	*head_b = temp;
}

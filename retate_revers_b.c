/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_revers_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:18:48 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 10:37:04 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	retate_revers_b(t_list **head2)
{
	t_list	*last;
	t_list	*before_last;

	before_last = get_the_befor_last(*head2);
	last = get_the_last(*head2);
	last->next = *head2;
	*head2 = last;
	before_last->next = NULL;
}

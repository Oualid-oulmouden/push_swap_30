/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_revers_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:18:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/25 09:27:54 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	retate_revers_a(t_list **head1)
{
	t_list	*last;
	t_list	*before_last;

	before_last = get_the_befor_last(*head1);
	last = get_the_last(*head1);
	last->next = *head1;
	*head1 = last;
	before_last->next = NULL;
}

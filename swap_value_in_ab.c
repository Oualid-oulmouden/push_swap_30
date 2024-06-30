/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_value_in_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:56:43 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/22 15:44:51 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_value_in_ab(t_list *head1, t_list *head2)
{
	swap_value_in_a(head1);
	swap_value_in_b(head2);
}

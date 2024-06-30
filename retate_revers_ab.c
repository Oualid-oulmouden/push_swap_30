/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_revers_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:18:13 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 10:37:41 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retate_revers_ab(t_list **head1, t_list **head2)
{
	retate_revers_a(head1);
	retate_revers_b(head2);
}

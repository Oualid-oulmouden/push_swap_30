/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:18:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 21:31:38 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_lis(t_list *stack)
{
	t_data	lis;
	int		*sta;
	int		i;
	int		pos;
	t_list	*sub;

	sta = stack_to_arr(stack);
	lis.d = fill_arry(ft_lstsize(stack), 1);
	lis.p = fill_arry(ft_lstsize(stack), -1);
	i = 0;
	check_lis1(ft_lstsize(stack), lis.d, lis.p, sta);
	pos = check_lis2(lis.d, ft_lstsize(stack), i);
	sub = NULL;
	while (pos != -1)
	{
		ft_lstadd_back(&sub, ft_lstnew(sta[pos]));
		pos = lis.p[pos];
	}
	free(sta);
	free(lis.d);
	free(lis.p);
	return (sub);
}

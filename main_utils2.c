/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:59:00 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 19:27:17 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of_min(t_list *stack, size_t size)
{
	size_t	i;
	int		tmp;
	size_t	index;

	tmp = INT_MAX;
	i = 0;
	index = i;
	while (stack)
	{
		if (tmp > stack->content)
		{
			tmp = stack->content;
			index = i;
		}
		i++;
		stack = stack->next;
	}
	if (index > size / 2)
		return (-(size - index));
	return (index);
}

void	sort(t_list **stack_a, size_t size)
{
	int	i;

	i = index_of_min(*stack_a, size);
	while (i)
	{
		if (i < 0)
		{
			retate_revers_a(stack_a);
			write(1, "rra\n", 4);
			i++;
		}
		else if (i > 0)
		{
			retate_a(stack_a);
			write(1, "ra\n", 3);
			i--;
		}
	}
}

int	*stack_to_arry(t_list *lst, size_t size)
{
	int		*arry;
	size_t	i;

	i = 0;
	arry = (int *)malloc(sizeof(int) * size);
	if (!arry || !size)
		return (NULL);
	while (i < size)
	{
		arry[i] = lst->content;
		lst = lst->next;
		i++;
	}
	return (arry);
}

int	check_sort(t_list *list)
{
	t_list	*temp;

	temp = list;
	if (!list)
		return (0);
	while (temp->next)
	{
		if (temp->content > ((t_list *)(temp)->next)->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	two_sort(t_list *stack)
{
	swap_value_in_a(stack);
	write(1, "sa\n", 3);
}

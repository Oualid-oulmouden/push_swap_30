/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_util1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:20:26 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 18:27:21 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_arry(size_t sizeOfStack, int value)
{
	int		*arr;
	size_t	i;

	arr = malloc(sizeof(int) * sizeOfStack);
	i = 0;
	while (i < sizeOfStack)
	{
		arr[i] = value;
		i++;
	}
	return (arr);
}

int	*stack_to_arr(t_list *stack)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * ft_lstsize(stack));
	i = 0;
	while (stack)
	{
		arr[i] = stack->content;
		i++;
		stack = stack->next;
	}
	return (arr);
}

void	ft_lstadd_front(t_list **lst, t_list *neew)
{
	if (!neew || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = neew;
		return ;
	}
	if (*lst)
	{
		neew->next = *lst;
		*lst = neew;
	}
}

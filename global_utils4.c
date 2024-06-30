/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_utils4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:05:13 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 18:12:54 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*element_in_middel(t_list *head)
{
	head->index = 0;
	while (head != NULL)
	{
		if (head->index == (lent_of_stack(head) - 1) / 2)
			return (head);
		head = head->next;
		head->index++;
	}
	return (0);
}

t_list	*find_the_smaller_number(t_list *head)
{
	t_list	*prv;

	prv = malloc(sizeof(t_list));
	prv->index = 0;
	prv->content = INT_MAX;
	while (head != NULL)
	{
		if (head->content <= prv->content)
		{
			prv->content = head->content;
			prv->index++;
		}
		head = head->next;
	}
	return (prv);
}

int	index_small(t_list *head)
{
	t_list	*prv;

	prv = malloc(sizeof(t_list));
	prv->index = 0;
	prv->content = INT_MAX;
	while (head != NULL)
	{
		if (head->content <= prv->content)
		{
			prv->content = head->content;
			prv->index++;
		}
		head = head->next;
	}
	return (prv->index);
}

void	ft_lstdelone(t_list *lst)
{
	if (lst)
	{
		free(lst);
	}
}

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst);
			*lst = temp;
		}
		*lst = NULL;
	}
}

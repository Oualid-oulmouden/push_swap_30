/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_util2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:32:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 18:27:06 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	check_lis1(int n, int *d, int *p, int *sta)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			if (sta[j] < sta[i] && d[i] < d[j] + 1)
			{
				d[i] = max(d[i], d[j] + 1);
				p[i] = j;
			}
			j++;
		}
		i++;
	}
}

int	check_lis2(int *d, int n, int i)
{
	int	ans;
	int	pos;

	i = 0;
	ans = d[0];
	pos = 0;
	while (i < n)
	{
		if (d[i] > ans)
		{
			ans = d[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	ft_lstadd_back(t_list **lst, t_list *neew)
{
	t_list	*ls;

	if (!lst || !neew)
		return ;
	ls = *lst;
	if (*lst == NULL)
	{
		*lst = neew;
		return ;
	}
	while (ls->next)
		ls = ls->next;
	ls->next = neew;
}

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->next = NULL;
	head->content = content;
	return (head);
}

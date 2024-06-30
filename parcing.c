/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:15:04 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/30 15:05:03 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_alpha(char *str, char **ar)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && i == 0)
			i++;
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Error\n", 6);
			free_memory1(ar);
			exit(1);
		}
		i++;
	}
}

int	check_n(t_list *stack, int n)
{
	while (stack)
	{
		if (n == stack->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}


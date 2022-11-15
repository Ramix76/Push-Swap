/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:18:21 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/15 13:02:20 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

static int	put_index(int ind, t_stack **lst)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *lst;
	while (temp)
	{
		if (temp -> num < ind)
			i++;
		temp = temp -> next;
	}
	return (i);
}

void	indexation(t_stack **lst)
{
	t_stack	*temp;

	temp = *lst;
	while (temp)
	{
		temp -> index = put_index(temp -> num, lst);
		temp = temp -> next;
	}
}

int	is_min(t_stack **lst)
{
	int		min;
	t_stack	*stack;

	stack = *lst;
	min = 0;
	while (stack)
	{
		if (stack -> index == 0)
			return (0);
		min++;
		stack = stack -> next;
	}
	return (min);
}

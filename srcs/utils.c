/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:18:21 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/12 12:03:19 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	sort_max1(t_stack **a, t_stack **b, t_stack *temp)
{
	if (temp-> index - 1 == (*b)->index)
		push(b, a, 'a');
	else if (temp-> index - 2 == (*b)-> index)
	{
		push(b, a, 'a');
		rotate(a, 'a');
	}
	else
		rotate(b, 'b');
}

void	sort_max2(t_stack **a, t_stack **b, t_stack *temp)
{
	if (temp-> index - 1 == (*b)->index)
		push(b, a, 'a');
	else if (temp-> index - 2 == (*b)-> index)
	{
		push(b, a, 'a');
		rotate(a, 'a');
	}
	rev_rotate(b, 'b');
}

size_t	is_min(t_stack **a, size_t n)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		if (temp -> index < n)
			return (0);
		temp = temp -> next;
	}
	return (1);
}

size_t	is_max(t_stack **a, size_t n)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		if (temp -> index > n)
			return (0);
		temp = temp -> next;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:30:06 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/26 19:01:00 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	two_numbers(t_stack **a, char c)
{
	swap(a, c);
}

void	three_numbers(t_stack **a, char c)
{
	size_t	first;
	size_t	second;
	size_t	last;

	first = (*a)-> index;
	second = (*a)-> next -> index;
	last = (*a)-> next -> next -> index;
	if (first > second && first < last)
		swap(a, c);
	else if (first > second && second > last)
	{
		swap(a, c);
		rev_rotate(a, c);
	}
	else if (first > second && first > last)
		rotate(a, c);
	else if (first < second && second > last && first < last)
	{
		swap(a, c);
		rotate(a, c);
	}
	else
		rev_rotate(a, c);
}

void	five_numbers(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*a) > 3)	
	{
		min_num_on_top(a, 'a');
		push(a, b, 'b');
	}
	if (stack_in_order(a))
		three_numbers(a, 'a');
	while (*b)
		push(b, a, 'a');
}

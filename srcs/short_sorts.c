/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:30:06 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/19 13:05:22 by framos-p         ###   ########.fr       */
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
	while (find_smallest(a) < find_biggest(a)) 
	{
		min_num_on_top(a);
		push(a, b, 'b');
	}
	while (find_biggest(a) < find_smallest(a))
	{
		max_num_on_top(a);
		push(a, b, 'b');
	}
}

/*
void	five_numbers(t_stack **a, t_stack **b)
{
	size_t	last;

	last = ft_lstlast(*a) -> index; 
	push(a, b, 'b');
	push(a, b, 'b');
	if (stack_in_order(a))
		three_numbers(a, 'a');
	while (*b)
	{
		if ((is_max(a, (*b) -> index) && is_max(a, last)) 
			|| (is_min(a, (*b) -> index) && is_min(a, (*a) -> index))
			|| ((*b) -> index < (*a) -> index && (*b) -> index > last))
			push(b, a, 'a');
		else if (((*a) -> next -> index < (*b) -> index 
			&& (*a) -> next -> next -> index > (*b) -> index)
			|| ((*b) -> index < (*a) -> next -> index 
			&& (*b) -> index > (*a) -> next -> next -> index))
			rev_rotate(a, 'a');
		else
			rotate(a, 'a');
	}
	if (stack_in_order(a))
		rotate(a, 'a');
	push(b, a, 'a');
	while (stack_in_order(a))
	{
		rotate(a, 'a');
		return ;
	}
}
*/

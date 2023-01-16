/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:25:09 by framos-p          #+#    #+#             */
/*   Updated: 2023/01/11 17:33:55 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

void	hundred_numbers(t_stack **a, t_stack **b, size_t chunks, size_t count)
{
	size_t	cut;
	size_t	x;

	cut = ft_lstsize(*a) / chunks;
	while (++count < chunks)
	{
		x = 0;
		while (x < cut)
		{
			if ((*a)-> index < cut)
			{
				move_to_b(a, b, cut);
				x++;
			}
			else
				rotate(a, 'a');
		}
		indexation(a);
	}
	while (*a)
		move_to_b(a, b, cut);
	indexation(b);
	return_to_a(a, b);
}

void	move_to_b(t_stack **a, t_stack **b, size_t cut)
{
	push(a, b, 'b');
	if ((*b)-> index <= cut / 2)
		rotate(b, 'b');
}

void	return_to_a(t_stack **a, t_stack **b)
{
	while (ft_lstsize(*b) != 0)
	{
		max_num_on_top(a, b);
		push(b, a, 'a');
		check_order_stack_a(a);
	}
}

void	check_order_stack_a(t_stack **a)
{
	t_stack	*last;
	size_t	length;

	length = ft_lstsize(*a);
	last = ft_lstlast(*a);
	if (length > 1
		&& (*a)-> next-> index == ((*a)-> index - 1))
		swap(a, 'a');
	if (length > 1 && last-> prev
		&& last-> index < last-> prev-> index)
		rev_rotate(a, 'a');
}

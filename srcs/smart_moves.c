/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:32:36 by framos-p          #+#    #+#             */
/*   Updated: 2022/12/12 12:03:50 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

size_t	find_smallest(t_stack **a)
{
	t_stack		*temp;
	size_t		i;

	temp = *a;
	i = 0;
	while (temp)
	{
		if (is_min(a, temp -> index))
			return (i);
		temp = temp -> next;
		i++;
	}
	return (0);
}

size_t	find_biggest(t_stack **a)
{
	t_stack		*temp;
	size_t		i;

	temp = *a;
	i = 0;
	while (temp)
	{
		if (is_max(a, temp -> index))
			return (i);
		temp = temp -> next;
		i++;
	}
	return (0);
}

void	min_num_on_top(t_stack **a, char c)
{
	t_stack		*temp;
	size_t		lenght;

	temp = *a;
	lenght = ft_lstsize(*a);
	if (find_smallest(a) == 0)
		return ;
	else if (find_smallest(a) == lenght / 2)
		rotate(a, c);
	while ((find_smallest(a) < lenght / 2) && find_smallest(a) > 0)
		rotate(a, c);
	while ((find_smallest(a) > lenght / 2) && find_smallest(a) < lenght)
		rev_rotate(a, c);
}

void	max_num_on_top(t_stack **a, t_stack **b)
{
	t_stack		*temp;
	size_t		lenght;

	temp = *b;
	lenght = ft_lstsize(*b);
	while (!is_max(b, temp-> index))
			temp = temp-> next;
	while ((find_biggest(b) <= (lenght / 2)) && find_biggest(b) > 0)
		sort_max1(a, b, temp);
	while ((find_biggest(b) > (lenght / 2)) && find_biggest(b) < lenght)
		sort_max2(a, b, temp);
}

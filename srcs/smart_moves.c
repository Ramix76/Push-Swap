/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:32:36 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/18 13:33:24 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

size_t	find_smallest(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp -> next)
	{
		if (is_min(a, temp -> index))
			return (temp -> index);
	}
	return (0);
}

size_t	find_biggest(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp -> next)
	{
		if (is_max(a, temp -> index))
			return (temp -> index);
	}
	return (0);
}

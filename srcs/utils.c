/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:18:21 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/16 17:33:18 by framos-p         ###   ########.fr       */
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
